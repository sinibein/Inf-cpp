#pragma once
#include "Transportmittel.h"

class WasserTransportmittel : public Transportmittel
{
private:
	double bruttoregistertonnen;

public:
	WasserTransportmittel(double Hoehe, double Breite, double Bruttoregistertonnen);

	double getBruttoregistertonnen();
	void anlegen(string Anlegehafen);
	void ablegen(string Ablegehafen);
};

