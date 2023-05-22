#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include <memory>
#include "Abonat.h"
#include "Abonat_Skype.h"
#include "Abonat_Skype_Extern.h"
#include "Abonat_Skype_Romania.h"
#include "Persoana.h"

class Agenda {
private:
	std::vector <Abonat*> lista_ab;
	static int nrAbonati;
public:
	Agenda();
	Agenda& operator+=(const Abonat& other);
	Agenda& operator+=(const Abonat_Skype& other);
	Agenda& operator+=(const Abonat_Skype_Extern& other);
	//Agenda& operator[](const std::string& other_nume);
	void operator[](const std::string& nume);
	Agenda& operator+=(const Abonat_Skype_Romania& other);
	static int get_nrAbonati();
	~Agenda();
	friend std::ostream& operator<<(std::ostream& os, const Agenda& agenda);
};