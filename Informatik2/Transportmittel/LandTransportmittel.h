#pragma once
#include "Transportmittel.h"
class LandTransportmittel : public Transportmittel
{
private:
	int radzahl;

public:
	LandTransportmittel(double Hoehe, double Breite, int Radzahl);

	int getRadzahl();
	void fahren(double km);
	void schieben(double km);
};

