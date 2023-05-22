#pragma once
#include "Persoana.h"

class Abonat : public Persoana {
protected:
	std::string nr_telefon;
public:
	Abonat();
	Abonat(const std::string& other_nr_telefon, const int other_id, const std::string& other_nume);
	Abonat(const std::string& other_nr_telefon, const Persoana& pers);
	Abonat(const Abonat& other);
	virtual ~Abonat();
	virtual void Afisare() override;
	virtual std::string getName();
	Abonat& operator=(const Abonat& other);

	friend std::ostream& operator<<(std::ostream& os, const Abonat& pers);
	friend std::istream& operator>>(std::istream& is, Abonat& pers);
};