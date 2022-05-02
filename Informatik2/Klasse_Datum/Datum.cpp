#include "Datum.h"

Datum::Datum(int Tag, int Monat, int Jahr) : tag(Tag), monat(Monat), jahr(Jahr)
{
};

int Datum::TagDesJahres()
{
	int tage_im_monat[] = { 31, 28 + istSchaltjahr(jahr), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int tag_nummer = 0;

	for (int i = 0; i < monat-1; i++)
	{
		tag_nummer += tage_im_monat[i];
	}
	tag_nummer += tag;

	return tag_nummer;
}

int Datum::istSchaltjahr(int irgendeinJahr) 
{
	if (irgendeinJahr % 4 == 0 && (irgendeinJahr % 100 != 0 || irgendeinJahr % 400 == 0))
		return 1;
	else
		return 0;
}