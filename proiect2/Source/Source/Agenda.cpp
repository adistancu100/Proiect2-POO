#include "Agenda.h"
#include "Abonat_Skype.h"
#include "Abonat_Skype_Extern.h"
#include "Abonat_Skype_Romania.h"
#include <typeinfo>
#include <memory>


Agenda::Agenda()
{

}

Agenda& Agenda::operator+=(const Abonat& other)
{
	nrAbonati++;
	lista_ab.push_back(new Abonat(other));
	return *this;
}

Agenda& Agenda::operator+=(const Abonat_Skype& other)
{
	nrAbonati++;
	lista_ab.push_back(new Abonat_Skype(other));
	return *this;
}

Agenda& Agenda::operator+=(const Abonat_Skype_Romania& other)
{
	nrAbonati++;
	lista_ab.push_back(new Abonat_Skype_Romania(other));
	return *this;
}

Agenda& Agenda::operator+=(const Abonat_Skype_Extern& other)
{
	nrAbonati++;
	lista_ab.push_back(new Abonat_Skype_Extern(other));
	return *this;
}

//Agenda& Agenda::operator[](const std::string& other_nume)
//{
//	bool found = false;
//
//	for (auto x : lista_ab)
//	{
//		if (typeid(*x) == typeid(Abonat_Skype_Extern))
//		{
//			Abonat* aux;
//			aux = dynamic_cast<Abonat_Skype_Extern*>(x);
//			if (aux->getName() == other_nume)
//			{
//				found = true;
//				aux->Afisare();
//				break;
//			}
//		}
//		else if (typeid(*x) == typeid(Abonat_Skype_Romania))
//		{
//			Abonat* aux;
//			aux = dynamic_cast<Abonat_Skype_Romania*>(x);
//			if (aux->getName() == other_nume)
//			{
//				found = 1;
//				aux->Afisare();
//				break;
//			}
//		}
//		else if (typeid(*x) == typeid(Abonat_Skype))
//		{
//			Abonat* aux;
//			aux = dynamic_cast<Abonat_Skype*>(x);
//			if (aux->getName() == other_nume)
//			{
//				found = true;
//				aux->Afisare();
//				break;
//			}
//		}
//		else
//		{
//			if (x->getName() == other_nume)
//			{
//				found = true;
//				x->Afisare();
//				break;
//			}
//		}
//	}
//
//	if (found == false)
//		throw std::invalid_argument("Abonatul cu numele accesat nu exista in agenda");
//
//}

void Agenda::operator[](const std::string& nume)
{
	int ok = 0;
	for (auto x : lista_ab)
	{
		try
		{
			if (typeid(*x) == typeid(Abonat_Skype) && (dynamic_cast<Abonat_Skype*>(x)->getName() == nume))
			{
				ok = 1;
				Abonat* temp;
				temp = dynamic_cast<Abonat_Skype*>(x);
				temp->Afisare();
				throw nume;
			}

			if (typeid(*x) == typeid(Abonat_Skype_Romania) && (dynamic_cast<Abonat_Skype_Romania*>(x)->getName() == nume))
			{
				ok = 1;
				Abonat* temp;
				temp = dynamic_cast<Abonat_Skype_Romania*>(x);
				temp->Afisare();
				throw nume;
			}

			if (typeid(*x) == typeid(Abonat_Skype_Extern) && (dynamic_cast<Abonat_Skype_Extern*>(x)->getName() == nume))
			{
				ok = 1;
				Abonat* temp;
				temp = dynamic_cast<Abonat_Skype_Extern*>(x);
				temp->Afisare();
				throw nume;
			}

			if (typeid(*x) == typeid(Abonat) && (dynamic_cast<Abonat*>(x)->getName() == nume))
			{
				ok = 1;
				Abonat* temp;
				temp = dynamic_cast<Abonat*>(x);
				temp->Afisare();
				throw nume;
			}
			
		}
		catch (const std::string& nume)
		{
			std::cout << "Abonatul " << nume << " se afla in agenda noastra." << "\n";
		}

	}
	if (ok == 0)
	{
		std::cout << "Nu exista";
	}
		
}




int Agenda::get_nrAbonati()
{
	return nrAbonati;
}


Agenda::~Agenda()
{

}

std::ostream& operator<<(std::ostream& os, const Agenda& agenda)
{
	int numarare = 1;
	for (auto x : agenda.lista_ab)
	{
		std::cout << "Abonatul nr " << numarare << " : ";
		if (typeid(*x) == typeid(Abonat_Skype)) 
		{
			Abonat* aux;
			aux = dynamic_cast<Abonat_Skype*>(x);
			aux->Afisare();
		}
		else if (typeid(*x) == typeid(Abonat_Skype_Romania)) 
		{
			Abonat* aux;
			aux = dynamic_cast<Abonat_Skype_Romania*>(x);
			aux->Afisare();
		}
		else if (typeid(*x) == typeid(Abonat_Skype_Extern))
		{
			Abonat* aux;
			aux = dynamic_cast<Abonat_Skype_Extern*>(x);
			aux->Afisare();
		}
		numarare++;
	}
	return os;
	
}

