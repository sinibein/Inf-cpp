#include "Datum.h"


int Datum::anzahl_objekte = 0;
bool Datum::plappern = false;

Datum::Datum(int Tag, int Monat, int Jahr) : tag(Tag), monat(Monat), jahr(Jahr)
{
	if (Datum::plappern)
	{
		cout << "Objekt wird erzeugt" << endl;
	}

	if (Datum::anzahl_objekte > 10)
	{
		cout << "Es wurden bereits "<< Datum::anzahl_objekte << " Exemplare erzeugt!" << endl;
	}
	Datum::anzahl_objekte++;
}

Datum::~Datum()
{
	if (Datum::plappern)
	{
		cout << "Objekt wird geloescht" << endl;
	}
	anzahl_objekte--;
}

int Datum::TagDesJahres()
{
	if (Datum::plappern)
	{
		cout << "Instanzmethode \"TagDesJahres()\" aufgerufen" << endl;
	}

	int tage_im_monat[] = { 31, 28 + istSchaltjahr(jahr), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int tag_nummer = 0;

	for (int i = 0; i < monat-1; i++)
	{
		tag_nummer += tage_im_monat[i];
	}
	tag_nummer += tag;

	return tag_nummer;
}

void Datum::Plappern(bool plappern)
{
	Datum::plappern = plappern;
}

int Datum::istSchaltjahr(int irgendeinJahr) 
{
	if (Datum::plappern)
	{
		cout << "Klassenmethode \"IstSchaltjahr()\" aufgerufen" << endl;
	}

	if (irgendeinJahr % 4 == 0 && (irgendeinJahr % 100 != 0 || irgendeinJahr % 400 == 0))
		return 1;
	else
		return 0;
}