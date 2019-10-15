#ifndef UCTENKA_H
#define UCTENKA_H

class Uctenka
{    
public:
	Uctenka(int aCisloUctenki, double aCastka, double aDph);
	Uctenka();
	void SetCastka(double aCastka) {
		this->castka = aCastka;
	}
	void SetDph(double aDph) {
		this->dph = aDph;
	}
	void SetCilsoUctenky(int cislo) {
		this->cisloUctenky = cislo;
	}

	int GetCisloUctenky()const {
		return cisloUctenky;
	}
	double GetCastku()const {
		return castka;
	}
	double GetDph()const {
		return dph;
	}
private:
	int cisloUctenky;
	double castka;
	double dph; 
};
#endif