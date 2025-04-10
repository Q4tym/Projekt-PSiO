#include "MyForm.h"

namespace ProjektPSiO {

    MyForm::MyForm(void)
    {
        InitializeComponent();
    }

    MyForm::~MyForm()
    {
        if (components)
        {
            delete components;
        }
    }

    void MyForm::InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->button2 = (gcnew System::Windows::Forms::Button());
        this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
        this->SuspendLayout();
        // 
        // button1
        // 
        this->button1->Location = System::Drawing::Point(493, 223);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(145, 76);
        this->button1->TabIndex = 0;
        this->button1->Text = L"Otworz formularz przesylkowy";
        this->button1->UseVisualStyleBackColor = true;
        this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
        // 
        // button2
        // 
        this->button2->Location = System::Drawing::Point(66, 90);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(243, 160);
        this->button2->TabIndex = 1;
        this->button2->Text = L"test";
        this->button2->UseVisualStyleBackColor = true;
        this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
        // 
        // menuStrip1
        // 
        this->menuStrip1->Location = System::Drawing::Point(0, 0);
        this->menuStrip1->Name = L"menuStrip1";
        this->menuStrip1->Size = System::Drawing::Size(1716, 24);
        this->menuStrip1->TabIndex = 2;
        this->menuStrip1->Text = L"menuStrip1";
        // 
        // MyForm
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::SystemColors::ControlDark;
        this->ClientSize = System::Drawing::Size(1716, 891);
        this->Controls->Add(this->button2);
        this->Controls->Add(this->button1);
        this->Controls->Add(this->menuStrip1);
        this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
        this->MainMenuStrip = this->menuStrip1;
        this->Name = L"MyForm";
        this->Text = L"E-sortownia v1.0";
        this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
        this->ResumeLayout(false);
        this->PerformLayout();
    }

    System::Void MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
        // Tworzenie obiektu klasy MyForm1
        ProjektPSiO::MyForm1^ form1 = gcnew ProjektPSiO::MyForm1();
        // Uruchomienie aplikacji
        form1->Show();
    }

    System::Void MyForm::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }

    System::Void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    System::Void MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
}


/*
#include "MyForm.h"
#include "Funkcje.cpp"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
    // Inicjalizacja aplikacji
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Tworzenie i uruchamianie g³ównego formularza
    ProjektPSiO::MyForm^ form = gcnew ProjektPSiO::MyForm();
    Application::Run(form);

    return 0;
}

/*int main()
{
	// Tworzenie obiektu klasy MyForm
	ProjektPSiO::MyForm^ form = gcnew ProjektPSiO::MyForm();
	// Uruchomienie aplikacji
	System::Windows::Forms::Application::Run(form);

}
*/
