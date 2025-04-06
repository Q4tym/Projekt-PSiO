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
	virtual void dane() = 0;
	/*
	Nadawca(std::string imie_N, std::string nazwisko_N, std::string mail_N, std::string ulica_N, std::string miasto_N, std::string wojewodztwo_N, int kod_pocztowy_N, std::string kraj_N)
	{
		imie(imie_N); // imie_N = imie; imie(imie_N); imie(std::string imie_N)
		nazwisko(nazwisko_N);
		adres_mailowy(mail_N);
		ulica(ulica_N), 
		miasto(miasto_N), 
		wojewodztwo(wojewodztwo_N), 
		kod_pocztowy(kod_pocztowy_N), 
		kraj(kraj_N);
		
	}
	*/
};
class Odbiorca : public Osoba, public Adres
{
public:
	virtual void dane() = 0;
	/*
	Odbiorca(std::string imie_O, std::string nazwisko_O, std::string mail_O, std::string ulica_O, std::string miasto_O, std::string wojewodztwo_O, int kod_pocztowy_O, std::string kraj_O) 
	{
		imie(imie_O);
		nazwisko(nazwisko_O);
		adres_mailowy(mail_O);
		ulica(ulica_O),
		miasto(miasto_O),
		wojewodztwo(wojewodztwo_O),
		kod_pocztowy(kod_pocztowy_O),
		kraj(kraj_O);
	}
	*/
};

class Przesylka : public Odbiorca
{
public:
	std::string numer_przesylki;
	std::string wymiar;
	virtual void Przesylka() = 0; 
};

class  Duza_Paczka : public Przesylka
{
public:
	int waga;

};






	





class MalaPaczka :public Przesylka
{
public:

};

class Srednia Paczka :public Przesylka
{

};