#include "Abonat.h"

Abonat::Abonat()
{

}

Abonat::Abonat(const std::string& other_nr_telefon, const int other_id, const std::string& other_nume)
	:Persoana(other_id, other_nume)
{
	nr_telefon = other_nr_telefon;
}

Abonat::Abonat(const std::string& other_nr_telefon, const Persoana& pers)
	:Persoana(pers)
{
	nr_telefon = other_nr_telefon;
}

Abonat::Abonat(const Abonat& other)
	:Persoana(other)
{
	nr_telefon = other.nr_telefon;
}


Abonat::~Abonat()
{

}

void Abonat::Afisare()
{
	std::cout << nr_telefon << ' ';
	Persoana::Afisare();
}

std::string Abonat::getName()
{
	return std::string(nume);
}

Abonat& Abonat::operator=(const Abonat& other)
{
	nr_telefon = other.nr_telefon;
	id = other.id;
	nume = other.nume;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Abonat& pers)
{
	os << "Persoana are id-ul "<< pers.id << " , numele " << pers.nume << " si numarul de telefon: " << pers.nr_telefon<<"\n";
	return os;
}

std::istream& operator>>(std::istream& is, Abonat& pers)
{
	std::cout << "Id-ul abonatului: " << "\n";
	is >> pers.id;
	std::cout << "Numele abonatului: " << "\n";
	is >> pers.nume;
	std::cout << "Numarul de telefon al abonatului: " << "\n";
	is >> pers.nr_telefon;
	return is;
}
