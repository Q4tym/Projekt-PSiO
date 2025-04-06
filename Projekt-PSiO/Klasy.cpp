#include "Klasy.h"
#include <istream>


//Przeciazony operator wejscia dla klasy Nadawca
std::istream& operator>>(std::istream& cin, Nadawca& nadawca)
{
	std::cout << "Podaj imie: ";
	cin >> nadawca.imie;
	std::cout << "Podaj nazwisko: ";
	cin >> nadawca.nazwisko;
	std::cout << "Podaj adres e-mail: ";
	cin >> nadawca.adres_mailowy;
	std::cout << "Podaj numer budynku: ";
	cin >> nadawca.numer_budynku;
	std::cout << "Podaj ulice: ";
	cin >> nadawca.ulica;
	std::cout << "Podaj miasto: ";
	cin >> nadawca.miasto;
	std::cout << "Podaj wojewodztwo: ";
	cin >> nadawca.wojewodztwo;
	std::cout << "Podaj kod pocztowy: ";
	cin >> nadawca.kod_pocztowy;
	std::cout << "Podaj kraj: ";
	cin >> nadawca.kraj;
	std::cout << "Podaj numer nadawczy: ";
//	cin >> nadawca.numer_nadawczy;
	return cin;
}
