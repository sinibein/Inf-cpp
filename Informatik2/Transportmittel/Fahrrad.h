#pragma once
#include "LandTransportmittel.h"
class Fahrrad : public LandTransportmittel
{
private:
	int anzahlgaenge;

public:
	Fahrrad(double Hoehe, double Breite, int Anzahlgaenge);

	int getAnzahlgaenge();
	void schieben(double km);
	void freihaendigfahren(string name);
};

