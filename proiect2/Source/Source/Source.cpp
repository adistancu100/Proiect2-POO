#include "Persoana.h"
#include "Agenda.h"


int Agenda::nrAbonati = 0;

int main()
{
	Persoana test(10, "Ion"), test2, test3 = test;
	//std::cin >> test2;
	//std::cout << test2;
	//std::cout << test3;*/

	Abonat a("0734716431", test), a2, a3=a;
	//std::cout << a;
	std::cin >> a2;
	std::cout << a2;
	//std::cout << a3;*/

	Abonat_Skype as("123","07345354",10,"AdrianStancu");
	//std::cout << as;
	/*Abonat_Skype ab = as;
	std::cout << ab;*/

	Abonat_Skype_Romania asr("asd@yahoo.com", as), asr1("asd@yahoo.com","123", "073453", 10,"StancuAsd"), asr2;
	//std::cout << asr1;
	//td::cin >> asr2;
	//std::cout << asr2;

	Abonat_Skype_Extern ase;
	//std::cin >> ase;
	//std::cout << ase;


	Agenda agenda1, agenda2;
	agenda1 += asr1;
	agenda1 += asr;
	agenda1["AdrianStancu"];
	agenda1["StancuAsd"];
	std::cout << agenda1;
	std::cout<<agenda1.get_nrAbonati();



}


