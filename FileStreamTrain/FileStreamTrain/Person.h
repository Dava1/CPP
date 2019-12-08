#ifndef _PERSON_H
#define _PERSON_H
#include "Address.h"
#include "Date.h"
#include <iostream>
using namespace std;


struct Person
{
private:
	std::string _name;
 	std::string _sername;
	Address* _address;
	Date* _date;
public:
	Person(std::string _name, std::string _sername, Address* _address, Date* _date);
	Person();
	~Person();
	std::string GetName() const;
	std::string GetSername() const;
	Address* GetAddress() const;
	Date* GetDate() const;
	friend std::ostream& operator <<(std::ostream& out, const Person& person);
	friend std::istream& operator >>(std::istream& in, Person& person);
};

#endif // !_PERSON_H


