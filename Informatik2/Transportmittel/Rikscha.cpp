#include "Rikscha.h"

Rikscha::Rikscha(double Hoehe, double Breite, string Farbe): LandTransportmittel(Hoehe, Breite, 2), farbe(Farbe)
{
}

string Rikscha::getFarbe()
{
	return this->farbe;
}

void Rikscha::ziehen(int anzahlpersonen)
{
	cout << anzahlpersonen << " Personen werden auf der Rikscha gezogen" << endl;
}

void Rikscha::schieben(double km)
{
	cout << "Rikscha wird " << km << "km geschoben" << endl;
}
