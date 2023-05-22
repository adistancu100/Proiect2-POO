#include "Abonat_Skype_Romania.h"

Abonat_Skype_Romania::Abonat_Skype_Romania()
{

}

Abonat_Skype_Romania::Abonat_Skype_Romania(const std::string& other_adresa_mail, const std::string& other_id_skype, const std::string& other_nr_telefon, const int other_id, const std::string& other_nume)
	:Abonat_Skype(other_id_skype, other_nr_telefon, other_id, other_nume)
{
	adresa_mail = other_adresa_mail;
}

Abonat_Skype_Romania::Abonat_Skype_Romania(const std::string& other_adresa_mail, const Abonat_Skype& ab_skype)
	:Abonat_Skype(ab_skype)
{
	adresa_mail = other_adresa_mail;
}

Abonat_Skype_Romania::Abonat_Skype_Romania(const Abonat_Skype_Romania& other)
	:Abonat_Skype(other)
{
	adresa_mail = other.adresa_mail;
}

Abonat_Skype_Romania::~Abonat_Skype_Romania()
{

}

void Abonat_Skype_Romania::Afisare()
{
	std::cout << adresa_mail<<" ";
	Abonat_Skype::Afisare();
}

std::string Abonat_Skype_Romania::getName()
{
	return std::string(nume);
}

Abonat_Skype_Romania& Abonat_Skype_Romania::operator=(const Abonat_Skype_Romania& other)
{
	adresa_mail = other.adresa_mail;
	id_skype = other.id_skype;
	nr_telefon = other.nr_telefon;
	id = other.id;
	nume = other.nume;
	return *this;
}


std::ostream& operator<<(std::ostream& os, const Abonat_Skype_Romania& pers)
{
	os << "Persoana cu numele " << pers.nume << " are id-ul " << pers.id << ", numarul de telefon " << pers.nr_telefon << ", fiind un abonat Skype din Romania cu id-ul " << pers.id_skype << " si adresa mail " << pers.adresa_mail << "\n";
	return os;
}

std::istream& operator>>(std::istream& is, Abonat_Skype_Romania& pers)
{
	std::cout << "Numele persoanei : " << "\n";
	is >> pers.nume;
	std::cout << "Id-ul persoanei : " << "\n";
	is >> pers.id;
	std::cout << "Numarul de telefon : " << "\n";
	is >> pers.nr_telefon;
	std::cout << "Adresa de email : " << "\n";
	is >> pers.adresa_mail;
	std::cout << "Cu id-ul de skype : " << "\n";
	is >> pers.id_skype;
	return is;
}

