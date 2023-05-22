#include "Persoana.h"

Persoana::Persoana()
{

}

Persoana::Persoana(const int other_id, const std::string& other_nume)
{
	id = other_id;
	nume = other_nume;
}

Persoana::Persoana(const Persoana& other)
{
	id = other.id;
	nume = other.nume;
}

Persoana& Persoana::operator=(const Persoana& other)
{
	id = other.id;
	nume = other.nume;
	return *this;
}

Persoana::~Persoana()
{
}

void Persoana::Afisare()
{
	std::cout << id << ", " << nume <<"\n";
}

std::ostream& operator<<(std::ostream& os, const Persoana& pers)
{
	os << "Persoana are id-ul "<< pers.id << " si numele "<< pers.nume <<"\n";
	return os;
}

std::istream& operator>>(std::istream& is, Persoana& pers)
{
	std::cout << "Dati valori pentru o persoana" << "\n";
	std::cout << "Id-ul persoanei:  " << "\n";
	is >> pers.id;
	std::cout << "Numele persoanei:  " << "\n";
	is >> pers.nume;
	return is;

}