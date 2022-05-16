#include "Transportmittel.h"

Transportmittel::Transportmittel(double Hoehe, double Breite) : hoehe(Hoehe), breite(Breite) 
{

}

void Transportmittel::bewegen(string Richtung)
{
	cout << "in Richtung " << Richtung << " bewegen" << endl;
}

double Transportmittel::getHoehe()
{
	return this->hoehe;
}

double Transportmittel::getBreite()
{
	return this->breite;
}