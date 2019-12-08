#include "Address.h"

Address::Address(std::string _street, std::string _city, int psc)
{
	this->_city = _city;
	this->_street = _street;
	this->psc = psc;
}

Address::~Address()
{
}

std::string Address::GetStreet() const
{
	return _street;
}

std::string Address::GetCity() const
{
	return _city;
}

int Address::GetPSC()
{
	return psc;
}

std::ostream& operator<<(std::ostream& out,const Address& address)
{
out << address._street<<", "<< address._city<<", "<< address.psc<<".";
return out;
}

std::istream& operator>>(std::istream& in, Address& address)
{
	in >> address._street >> address._city >> address.psc;
	return in;
}
