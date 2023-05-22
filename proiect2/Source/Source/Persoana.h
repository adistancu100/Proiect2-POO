#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Persoana {
protected:
	int id;
	std::string nume;
public:
	Persoana();
	Persoana(const int other_id, const std::string& other_nume);
	Persoana(const Persoana& other);
	Persoana& operator=(const Persoana& other);
	virtual void Afisare();
	virtual ~Persoana();

	friend std::ostream& operator<<(std::ostream& os, const Persoana& pers);
	friend std::istream& operator>>(std::istream& is, Persoana& pers);
};
