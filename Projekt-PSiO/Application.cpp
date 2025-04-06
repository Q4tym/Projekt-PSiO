#include "MyForm.h"
#include "Formularz_wysylkowy.h"
#include "Funkcje.cpp"

//using namespace System;
//using namespace System::Windows::Forms;


[System::STAThread]
void Main(array<System::String^>^ args)

{
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	ProjektPSiO::MyForm form;
	System::Windows::Forms::Application::Run(% form);
}


int main()
{
	// Tworzenie obiektu klasy MyForm
	ProjektPSiO::MyForm^ form = gcnew ProjektPSiO::MyForm();
	ProjektPSiO::MyForm1^ form1 = gcnew ProjektPSiO::MyForm1();
	// Uruchomienie aplikacji
	System::Windows::Forms::Application::Run(form);


}