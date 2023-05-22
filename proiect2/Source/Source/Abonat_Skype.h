#pragma once
#include "Abonat.h"

class Abonat_Skype : public Abonat {
protected:
	std::string id_skype;
public:
	Abonat_Skype();
	Abonat_Skype(const std::string& other_id_skype, const std::string& other_nr_telefon, const int other_id, const std::string& other_nume);
	Abonat_Skype(const std::string& other_id_skype, const Abonat& ab);
	Abonat_Skype(const Abonat_Skype& other);

	virtual ~Abonat_Skype();
	virtual void Afisare() override;
	virtual std::string getName() override;
	Abonat_Skype& operator=(const Abonat_Skype& other);

	friend std::ostream& operator<<(std::ostream& os, const Abonat_Skype& pers);
	friend std::istream& operator>>(std::istream& is, Abonat_Skype& pers);

};