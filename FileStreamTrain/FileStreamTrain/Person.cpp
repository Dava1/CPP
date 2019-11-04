#include "Person.h"

Person::Person(std::string _name, std::string _sername, Address* _address, Date* _date)
{
	this->_name = _name;
	this->_sername = _sername;
	this->_date = _date;
	this->_address = _address;
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

//ostream& Person::operator<<(ostream& os, const Person& object)
//{
//	os << object.re << " " << object.im;
//}
