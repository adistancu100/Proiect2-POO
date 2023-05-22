#include "Abonat_Skype.h"

Abonat_Skype::Abonat_Skype()
{

}

Abonat_Skype::Abonat_Skype(const std::string& other_id_skype, const std::string& other_nr_telefon, const int other_id, const std::string& other_nume)
	:Abonat(other_nr_telefon, other_id, other_nume)
{
	id_skype = other_id_skype;
}

Abonat_Skype::Abonat_Skype(const std::string& other_id_skype, const Abonat& ab)
	:Abonat(ab)
{
	id_skype = other_id_skype;
}

Abonat_Skype::Abonat_Skype(const Abonat_Skype& other)
	:Abonat(other)
{
	id_skype = other.id_skype;
}

Abonat_Skype::~Abonat_Skype()
{

}

void Abonat_Skype::Afisare()
{
	std::cout << id_skype<<" ";
	Abonat::Afisare();
}

std::string Abonat_Skype::getName()
{
	return std::string(nume);
}


Abonat_Skype& Abonat_Skype::operator=(const Abonat_Skype& other)
{
	id_skype = other.id_skype;
	nr_telefon = other.nr_telefon;
	id = other.id;
	nume = other.nume;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Abonat_Skype& pers)
{
	os << "Abonatul cu numele " << pers.nume << " are id-ul " << pers.id << " , numarul de telefon " << pers.nr_telefon << " fiind abonat skype cu id-ul " << pers.id_skype<<"\n";
	return os;
}

std::istream& operator>>(std::istream& is, Abonat_Skype& pers)
{
	std::cout << "Numele abonatului de skype" << "\n";
	is >> pers.nume;
	std::cout << "Id-ul normal" << "\n";
	is >> pers.id;
	std::cout << "Id-ul abonatului de skype" << "\n";
	is >> pers.id_skype;
	std::cout << "Nr de telefon " << "\n";
	is >> pers.nr_telefon;
	return is;
}




