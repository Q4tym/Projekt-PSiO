#pragma once
#include <string>
#include <msclr/marshal_cppstd.h> 

namespace ProjektPSiO {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm1 : public System::Windows::Forms::Form {
    public:
        MyForm1(void) {
            InitializeComponent();
        }

    protected:
        ~MyForm1() {
            if (components) delete components;
        }

    private:
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Timer^ timer1;
        System::Windows::Forms::TextBox^ textBox1;

        System::ComponentModel::IContainer^ components;

        void InitializeComponent(void) {
            this->components = (gcnew System::ComponentModel::Container());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(175, 87);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 23);
            this->button1->TabIndex = 0;
            this->button1->Text = L"button1";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(246, 461);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(100, 20);
            this->textBox1->TabIndex = 1;
            this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox1_KeyDown);
            // 
            // MyForm1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(784, 933);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button1);
            this->Name = L"MyForm1";
            this->Text = L"MyForm1";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private:
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            if (String::IsNullOrEmpty(textBox1->Text)) {
                MessageBox::Show("Pole jest puste!", "B³¹d");
            }
            else {
                MessageBox::Show("Wpisa³eœ: " + textBox1->Text, "Info");
            }
        }

        System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
            if (e->KeyCode == Keys::Enter) {
                button1_Click(sender, e); // Reu¿ywa logiki z przycisku
                e->SuppressKeyPress = true;
            }
        }

        
        System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
    private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
    }

    };
}