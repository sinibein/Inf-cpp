#include "Auto.h"

Auto::Auto(double Hoehe, double Breite, double Spritverbrauch): LandTransportmittel(Hoehe, Breite, 4), spritverbrauch(Spritverbrauch)
{
}

double Auto::getSpritverbrauch()
{
	return this->spritverbrauch;
}

void Auto::fahren(double km)
{
	cout << "Auto faehrt " << km << "km" << endl;
}

void Auto::tanken(int liter)
{
	cout << "In das Auto wurden " << liter << " Liter getankt" << endl;
}
