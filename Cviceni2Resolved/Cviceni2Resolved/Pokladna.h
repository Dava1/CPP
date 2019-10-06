#ifndef POKLADNA_H
#define POKLADNA_H
#include "Uctenka.h"
#include <stdlib.h>
#include <stdio.h>
#pragma once
class Pokladna
{
	Uctenka *uctenky[10];
	int pocetVydanychUctenek=0;
	int citacld(){return rand() % 1000 + 1;}//pro generovani cisli uctenky
		
public:
	Uctenka& vystavUctenku(double castka, double dph)
	{
	*uctenky = new Uctenka();
	uctenky[pocetVydanychUctenek] = new Uctenka(citacld(),castka,dph);
	pocetVydanychUctenek++;
	}
	
	Uctenka& dejUctenku(int cisloUctenky)
	{
		for (int i = 0; i < *uctenky.length; i++)
		{
			if (*uctenky[i].getCisloUctenky == cisloUctenky)
			{
				return *uctenky[i];
			}
			else return *uctenky[0];
		}

	}
	double dejCastku() const //nevim jake bude spravne?
	{
		int i = 0;
		double temp;
		std::for(double castka : *uctenky)
		{
			castka = 0;
			temp = *uctenky[i].getCastka() + castka;
			i++;
				
		}
		delete i;
		return temp;
	}
	double DejCasktuVcDph() const 
	{
		int i = 0;
		std::for (double castka : *uctenky)
		{
			castka = 0;
			castka = castka + uctenky[i].getDph();
			i++;
			return castka;
		}
		delete i;
	}

};
#endif
