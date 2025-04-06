#include <iostream>
class Osoba
{
public:
	virtual void dane() = 0; // czysta funkcja wirtualna
	std::string imie;
	std::string nazwisko;
	std::string adres_mailowy;
};

class Adres
{
public:
	virtual void dane() = 0; // czysta funkcja wirtualna	
	int numer_budynku;
	std::string ulica;
	std::string miasto;
	std::string wojewodztwo;
	int kod_pocztowy;
	std::string kraj;
};

class Nadawca : public Osoba,  public Adres
{
public:
	Nadawca(std::string imie, std::string nazwisko, std::string mail, std::string   ) {}
	int numer_nadawczy;
};