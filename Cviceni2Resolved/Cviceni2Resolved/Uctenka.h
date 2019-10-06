#ifndef UCTENKA_H
#define UCTENKA_H

#include <iostream>

class Uctenka
{    
private: //neni nutno nastaveno to automaticke

	int cisloUctenky;
	std::double_t castka;
	std::double_t dph;
	~Uctenka() {} //smazat obejkt 
public://metody pro cteni a nastaveni
	
	Uctenka(int aCisloUctenki,double aCastka, double aDph)
	{cisloUctenky = aCisloUctenki; castka = aCastka; dph = aDph;}
	Uctenka() {}
	void setCastka(double aCastka){castka = aCastka;}
	void setDph(double aDph){dph = aDph;}
	void setCilsoUctenky(int cislo){cisloUctenky = cislo;}
	
	int getCisloUctenky(){return cisloUctenky;}
	double getCastku(){return castka;}
	double getDph(){return dph;}
	void smazat(Uctenka *ptr){delete ptr;}
	
};
#endif