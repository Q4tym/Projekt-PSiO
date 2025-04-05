#include "MyForm.h"
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
