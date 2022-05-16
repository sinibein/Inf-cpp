#include "Fahrrad.h"

																						//ein Fahrrad hat i.d.R. zwei Räder, daher wird hier eine zwei übergeben
Fahrrad::Fahrrad(double Hoehe, double Breite, int Anzahlgaenge): LandTransportmittel(Hoehe, Breite, 2), anzahlgaenge(Anzahlgaenge)
{
}

int Fahrrad::getAnzahlgaenge()
{
	return this->anzahlgaenge;
}

void Fahrrad::schieben(double km)
{
	cout << "Fahrrad wird " << km << "km geschoben" << endl;
}

void Fahrrad::freihaendigfahren(string name)
{
	cout << name << " faehrt freihaendig auf dem Fahrrad" << endl;
}
