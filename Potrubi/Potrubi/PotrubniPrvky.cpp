#include "PotrubniPrvky.h"

bool Minus::JeKorektneZapojen(const IPotrubi* potrubi) const
{
	return potrubi->DejPrvek(_x - 1, _y) != nullptr && potrubi->DejPrvek(_x + 1, _y) != nullptr;
}

bool Plus::JeKorektneZapojen(const IPotrubi* potrubi) const
{
	return potrubi->DejPrvek(_x, _y + 1) != nullptr && potrubi->DejPrvek(_x, _y + 1) != nullptr &&
	    	potrubi->DejPrvek(_x - 1, _y) != nullptr && potrubi->DejPrvek(_x + 1, _y) != nullptr;
}

bool Prvek_I::JeKorektneZapojen(const IPotrubi* potrubi) const
{
	return potrubi->DejPrvek(_x,_y+1)!=nullptr && potrubi->DejPrvek(_x,_y-1)!=nullptr;
}

bool Prvek_O::JeKorektneZapojen(const IPotrubi* potrubi) const
{
	return true;
		
}

bool Prvek_T::JeKorektneZapojen(const IPotrubi* potrubi) const
{
	return potrubi->DejPrvek(_x, _y - 1) != nullptr && potrubi->DejPrvek(_x, _y - 1) != nullptr &&
		potrubi->DejPrvek(_x - 1, _y) != nullptr;
}

bool Prvek_Empty::JeKorektneZapojen(const IPotrubi* potrubi) const
{
	return true;
}
