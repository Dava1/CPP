#include <iostream>
#include "Person.h"
#include "Address.h"
#include "Date.h"
#include <fstream>
using namespace std;


int main(int argc, char** argv)
{
	ifstream in{};
	ofstream out{};
	Date date{ 7, 8, 1955 };
	Date date1{ 6, 7, 1976 };
	

	Address adress{ "Lenina", "Dagestan", 10000 };
	Address elista{ "Studenska","Pardubice",853000 };
	Person personFromDagestan { "Oleg", "Ivanov", &adress, &date };
	Person personFromPardubice{"Nikita","Fortocnik",&elista,&date1};

	std::string data = "file_persons.dat";
	out.open(data, std::ios::out);
	out << personFromDagestan<<personFromPardubice;
	out.close();
	Person persons[3];
	in.open(data, std::ios::in);
	in >> persons[0] >> persons[1];
	for (int i = 0; i < 3; i++)
		cout << persons[i];
	return 0;
};