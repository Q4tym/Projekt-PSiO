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
	Nadawca(std::string imie_N, std::string nazwisko_N std::string mail_N, std::string ulica_N, std::string miasto_N, std::string wojewodztwo_N, int kod_pocztowy_N, std::string kraj_N) 
	{
		imie_N(imie), nazwisko_N(nazwisko), adres_mailowy_M(mail), ulica_N(ulica), miasto_N(miasto), wojewodztwo_N(wojewodztwo), kod_pocztowy_N(kod_pocztowy), kraj_N(kraj);
	}
	int numer_nadawczy;
};
class Odbiorca : public Osoba, public Adres
{
public:
	Odbiorca(std::string imie, std::string nazwisko, std::string mail, std::string ulica, std::string miasto, std::string wojewodztwo, int kod_pocztowy, std::string kraj) {}
	int numer_nadawczy;
};