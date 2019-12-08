
#ifndef _ADDRESS_H
#define _ADDRESS_H
#include <string>
#include <iostream>

struct Address
{
private:
	std::string _city;
	std::string _street;
	int psc;
public:
	Address(std::string _street,std::string _city, int psc);
	~Address();
	std::string GetStreet() const;
	std::string GetCity() const;
	int GetPSC();
	friend std::ostream& operator<<(std::ostream& out,const Address& address);
	friend std::istream& operator>>(std::istream& in, Address& address);
};


#endif // !_ADRES_H


