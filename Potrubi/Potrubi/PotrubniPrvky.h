#ifndef _POTRUBNI_PRVKY_H
#define _POTRUBNI_PRVKY_H
#include "IPotrubi.h"


struct Minus :  APotrubniPrvek
{
	Minus(int x, int y) { _x = x; _y = y; }
	virtual bool JeKorektneZapojen(const IPotrubi* potrubi) const;
};
struct Plus : APotrubniPrvek
{
	Plus(int x, int y) { _x = x; _y = y; }
	virtual bool JeKorektneZapojen(const IPotrubi* potrubi) const;
};
struct Prvek_I : APotrubniPrvek
{
	Prvek_I(int x, int y) { _x = x; _y = y; }
	virtual bool JeKorektneZapojen(const IPotrubi* potrubi) const;
};
struct Prvek_O : APotrubniPrvek
{
	Prvek_O(int x, int y) { _x = x; _y = y; }
	virtual bool JeKorektneZapojen(const IPotrubi* potrubi) const;
};
struct Prvek_T : APotrubniPrvek
{
	Prvek_T(int x, int y) { _x = x; _y = y; }
	virtual bool JeKorektneZapojen(const IPotrubi* potrubi) const;
};
struct Prvek_Empty : APotrubniPrvek
{
	Prvek_Empty(int x, int y) { _x = x; _y = y; }
	virtual bool JeKorektneZapojen(const IPotrubi* potrubi) const;
};
#endif // !_POTRUBNI_PRVKY_H

