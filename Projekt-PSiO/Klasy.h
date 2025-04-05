#include <iostream>
class Osoba
{
protected:
	std::string imie;
	std::string nazwisko;
	std::string adres_mailowy;
};

class Adres
{
protected:
	int numer_budynku;
	std::string ulica;
	std::string miasto;
	std::string wojewodztwo;
	int kod_pocztowy;
	std::string kraj;
};

class Nadawca : virtual public Osoba, virtual public Adres
{
public:
	int numer_nadawczy;
};