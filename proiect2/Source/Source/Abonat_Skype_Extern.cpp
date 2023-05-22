#include "Abonat_Skype_Extern.h"

Abonat_Skype_Extern::Abonat_Skype_Extern()
{

}

Abonat_Skype_Extern::Abonat_Skype_Extern(const std::string& other_tara, const std::string& other_id_skype, const std::string& other_nr_telefon, const int other_id, const std::string& other_nume)
	:Abonat_Skype(other_id_skype, other_nr_telefon, other_id, other_nume)
{
	tara = other_tara;
}

Abonat_Skype_Extern::Abonat_Skype_Extern(const std::string& other_tara, const Abonat_Skype& ab_skype)
	:Abonat_Skype(ab_skype)
{
	tara = other_tara;
}

Abonat_Skype_Extern::Abonat_Skype_Extern(const Abonat_Skype_Extern& other)
	:Abonat_Skype(other)
{
	tara = other.tara;
}

Abonat_Skype_Extern::~Abonat_Skype_Extern()
{

}

void Abonat_Skype_Extern::Afisare()
{
	std::cout << tara << " ";
	Abonat_Skype::Afisare();
}

std::string Abonat_Skype_Extern::getName()
{
	return std::string(nume);
}


std::ostream& operator<<(std::ostream& os, const Abonat_Skype_Extern& pers)
{

	os << "Persoana cu numele " << pers.nume << " cu id-ul " << pers.id << " , cu numarul de telefon " << pers.nr_telefon << " este un abonat skype din " << pers.tara << " si are id-ul de skype " << pers.id_skype << "\n";
	return os;
}

Abonat_Skype_Extern& Abonat_Skype_Extern::operator=(const Abonat_Skype_Extern& other)
{
	tara = other.tara;
	id_skype = other.id_skype;
	nr_telefon = other.nr_telefon;
	id = other.id;
	nume = other.nume;
	return *this;
}

std::istream& operator>>(std::istream& is, Abonat_Skype_Extern& pers)
{
	std::cout << "Numele persoanei : " << "\n";
	is >> pers.nume;
	std::cout << "Id-ul persoanei : " << "\n";
	is >> pers.id;
	std::cout << "Numarul de telefon : " << "\n";
	is >> pers.nr_telefon;
	std::cout << "Localizat in tara : " << "\n";
	is >> pers.tara;
	std::cout << "Cu id-ul de skype : " << "\n";
	is >> pers.id_skype;
	return is;
}

