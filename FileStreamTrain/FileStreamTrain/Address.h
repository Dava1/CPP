
#ifndef _ADDRESS_H
#define _ADDRESS_H
#include <string>

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
};
#endif // !_ADRES_H


