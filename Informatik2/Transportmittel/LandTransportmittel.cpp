#include "LandTransportmittel.h"

LandTransportmittel::LandTransportmittel(double Hoehe, double Breite, int Radzahl) : Transportmittel(Hoehe, Breite), radzahl(Radzahl)
{

}


int LandTransportmittel::getRadzahl()
{
	return this->radzahl;
}

void LandTransportmittel::fahren(double km)
{
	cout << "Fahre " << km << " Kilometer" << endl;
}

void LandTransportmittel::schieben(double km)
{
	cout << "Schiebe " << km << " Kilometer" << endl;
}