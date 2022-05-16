#pragma once
#include "LandTransportmittel.h"
class Auto : public LandTransportmittel
{
private:
	double spritverbrauch;

public:
	Auto(double Hoehe, double Breite, double Spritverbrauch);

	double getSpritverbrauch();
	void fahren(double km);
	void tanken(int liter);
};

