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
