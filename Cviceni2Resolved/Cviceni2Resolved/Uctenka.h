#ifndef UCTENKA_H
#define UCTENKA_H


struct Uctenka
{
public:	
	Uctenka(int aCisloUctenki, double aCastka, double aDph) :numberOfTicket(aCisloUctenki),castka(aCastka),dph(aDph){}	
	Uctenka() {}
	~Uctenka() {}
	
	void SetCastka(double aCastka)
	{
		castka = aCastka;
	}
	
	void SetDph(double aDph)
	{
		dph = aDph;
	}
	void SetCilsoUctenky(int cislo)
	{
		numberOfTicket = cislo;
	}
	
	int GetCisloUctenky() const
	{
		return numberOfTicket;
	}
	
	double GetCastku() const
	{
		return castka;
	}
	
	double GetDph() const
	{
		return dph;
	}
	
private :
	double dph;
	double castka;
	int numberOfTicket;
};
#endif