#include "WasserTransportmittel.h"

WasserTransportmittel::WasserTransportmittel(double Hoehe, double Breite, double Bruttoregistertonnen) : Transportmittel(Hoehe, Breite), bruttoregistertonnen(Bruttoregistertonnen)
{
}

double WasserTransportmittel::getBruttoregistertonnen()
{
	return this->bruttoregistertonnen;
}

void WasserTransportmittel::anlegen(string Anlegehafen)
{
	cout << "Anlegen am Hafen: " << Anlegehafen << endl;
}

void WasserTransportmittel::ablegen(string Ablegehafen)
{
	cout << "Ablegen am Hafen: " << Ablegehafen << endl;
}
