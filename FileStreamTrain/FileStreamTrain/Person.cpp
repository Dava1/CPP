#include "Person.h"

Person::Person(std::string _name, std::string _sername, Address* _address, Date* _date)
{
	this->_name = _name;
	this->_sername = _sername;
	this->_date = _date;
	this->_address = _address;
}

Person::Person()
{
}

Person::~Person()
{
}

std::string Person::GetName() const
{
	return _name;
}

std::string Person::GetSername() const
{
	return _sername;
}

Address* Person::GetAddress() const
{
	return _address;
}

Date* Person::GetDate() const
{
	return _date;
}

std::ostream& operator<<(std::ostream& out, const Person& person)
{
	return out << person._name << "," << person._sername << "," << person._address << "," << person._date;
}

std::istream& operator>>(std::istream& in, Person& person)
{
 return in >> person._name >> person._sername >> *person._address >> *person._date;
}
