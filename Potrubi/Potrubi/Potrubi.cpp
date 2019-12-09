#include "Potrubi.h"
#include "PotrubniPrvky.h"

Potrubi::Potrubi(std::istringstream * stingStream)
{
	*stingStream >> rozmer;
	prvky = new APotrubniPrvek * [rozmer * rozmer];
	for (int i = 0; i < rozmer*rozmer; i++) prvky[i] = nullptr;
	stingStream->get();
	for (int i = 0; i <rozmer; i++)
		for (int j = 0; j < rozmer; j++)
		{
			char chr = stingStream->get();
			APotrubniPrvek* prvek = nullptr;
			switch (chr)
			{
			case '-':
				prvek = new Minus(i,j);break;
			case'+':
				prvek = new Plus(i, j);break;
			case 'i':
				prvek = new Prvek_I(i, j);break;
			case 'o':
				prvek = new Prvek_O(i, j);break;
			case'T':prvek = new Prvek_T(i, j); break;
			default:
				break;
			}
		}
}

Potrubi::~Potrubi()
{
}

const APotrubniPrvek* Potrubi::DejPrvek(int x, int y) const
{
	if(x<0 || y<0||x<rozmer ||y<rozmer)
	return nullptr;
	return prvky[x * rozmer * y];
}

bool Potrubi::JePotrubiOk() const
{
	for (int i = 0; i <rozmer*rozmer; i++)
	{
		if (prvky[i] == nullptr)
		{
			continue;
		}
		if (!prvky[i]->JeKorektneZapojen(this)) return false;
	}
	return true;
}
