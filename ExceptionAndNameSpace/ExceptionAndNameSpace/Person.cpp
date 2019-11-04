#include "Person.h"

Entita::Person::Person(std::string name, std::string telephoneNumber, int id)
{
	this->name = name;
	this->telephoneNumber = telephoneNumber;
	this->id = id;
}

Entita::Person::~Person()
{
}

std::string Entita::Person::GetName() const
{
	return name;
}

std::string Entita::Person::GetTelephoneNumbers() const
{
	return telephoneNumber;
}

int Entita::Person::GetId() const
{
	return id;
}

void Entita::Person::SetName(std::string name)
{
	this->name = name;
}

void Entita::Person::SetTelephoneNumber(std::string telephoneNumber)
{
	this->telephoneNumber = telephoneNumber;
}

void Entita::Person::SetId(int id)
{
	this->id = id;
}


