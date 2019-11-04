#include <iostream>
#include "Person.h"
#include "Address.h"
#include "Date.h"
#include <fstream>
using namespace std;


int main(int argc, char** argv)
{
	fstream fout;
	fout.open("my_file.txt");
	Address* addressPtushkin = new Address("Sychorukova","Kiev",555);
	Date* birthPtushkin = new Date(2,11,1987);
	Person* person = new Person("Anton","Ptushkin",addressPtushkin,birthPtushkin);
	try 
	{
		fout << "David is greate programmer!!!"<<endl;
		fout << person->GetName() <<" "<< person->GetSername() <<" "<< person->GetAddress() <<" "<< person->GetDate() << "." << endl;
	}
	catch(int a)
	{
		cout << "File failed open!" << endl;
	}
	fout.close();
	return 0;
};