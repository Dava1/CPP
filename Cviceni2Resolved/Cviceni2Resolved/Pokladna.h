#ifndef POKLADNA_H
#define POKLADNA_H
#include "Uctenka.h"

#pragma once

class Pokladna
{
	public:
	Pokladna(int velikostPokladny) {
		this->pocetVydanychUctenek = new Uctenka[velikostPokladny];
		this-> citacld = 0;	
	}
	
	Uctenka& vystavUctenku(double castka, double dph) 
	{
	Uctenka uctenka = Uctenka(citacld, castka, dph);
	pocetVydanychUctenek[citacld] = uctenka;
	citacld++;
	return pocetVydanychUctenek[citacld--];
	}
	
	Uctenka& dejUctenku(int cisloUctenky)
	{
		for (int i = 0; i < citacld; i++)
		{
			if (*pocetVydanychUctenek[i].GetCisloUctenky == cisloUctenky)
			{
				return pocetVydanychUctenek[i];
			}

		}
		throw "uctenky neni";
	return pocetVydanychUctenek[0];
	}

	double dejCastku() const 
	{
		double temp = 0;
		for (int i = 0; i < citacld; i++)
		{
			temp += *pocetVydanychUctenek->GetCastku;
		}
		return temp;
	}
	
	double DejCasktuVcDph() const 
	{
		double temp;
		for (int i = 0; i<citacld;i++) 
		{
			temp += *pocetVydanychUctenek[i].GetCastku*(1 + pocetVydanychUctenek[i].GetDph);
		}
	}
private:
	Uctenka* pocetVydanychUctenek;
	int citacld;
};
#endif
