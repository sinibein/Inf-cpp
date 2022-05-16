#pragma once
#include "LandTransportmittel.h"
class Rikscha : public LandTransportmittel
{
private:
	string farbe;

public:
	Rikscha(double Hoehe, double Breite, string Farbe);

	string getFarbe();
	void ziehen(int anzahlpersonen);
	void schieben(double km);
};

