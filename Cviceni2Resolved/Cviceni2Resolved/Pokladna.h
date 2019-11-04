#ifndef POKLADNA_H
#define POKLADNA_H
#include "Uctenka.h"
#include <stdlib.h>
#include <stdio.h>
#pragma once

struct Pokladna
{		
public:
	
	Pokladna(int aNum) :  pocetVydanychUctenek(new Uctenka[aNum]), citacld(0){}

	
	Uctenka& vystavUctenku(double castka, double dph)
	{
	 return &pocetVydanychUctenek[citacld] = new Uctenka(citacld, dph, castka);
	 citacld++;
	}
	
	Uctenka& dejUctenku(int cisloUctenky)
	{
		for (int i = 0; i < citacld; i++)
		{
			if (pocetVydanychUctenek[i].GetCisloUctenky() == cisloUctenky)
			{
				return pocetVydanychUctenek[i];
			}
			throw "Uctenky neni";
		
		}

	}
	double dejCastku() const 
	{
		double temp;
		for (int i = 0; i <sizeof(pocetVydanychUctenek);i++ )
		{
			temp = *uctenky[i].GetCastka() + castka;	
		}
		return temp;
	}
	double DejCasktuVcDph() const 
	{
		int i = 0;
		for (int i = 0; i < pocetVydanychUctenek; i++);
		{
			castka = 0;
			castka = castka * (1 + uctenky[i].GetDph());
			i++;
			return castka;
		}
		delete i;
	}

private :
	Uctenka* pocetVydanychUctenek;

	int citacld;

};
#endif
