#include <iostream>
#include "Transportmittel.h"
#include "LandTransportmittel.h"
#include "WasserTransportmittel.h"

using namespace std;

int main()
{
	//Basisklasse erstellen und testen
	cout << "---Test fuer die Basisklasse \"Transportmittel\"--" << endl;

	Transportmittel t(20.12, 40.543);
	t.bewegen("Norden");

	cout << "Hoehe des Transportmittels: " << t.getHoehe() << endl 
		 << "Breite des Transportmittels: " << t.getBreite() << endl;


	//LandTransportmittel erstellen und testen
	cout << endl << endl << "---Test fuer die abgeleitete Klasse \"LandTransportmittel\"--" << endl;
	
	LandTransportmittel lt(32.542, 5.11, 4);
	lt.bewegen("Osten");
	cout << "Hoehe des LandTransportmittels: " << lt.getHoehe() << endl
		<< "Breite des LandTransportmittels: " << lt.getBreite() << endl;
		
	lt.fahren(5.2);
	lt.schieben(0.2);
	cout << "Anzahl der Raeder: " << lt.getRadzahl() << endl;

	//WasserTransportmittel erstellen und testen
	cout << endl << endl << "---Test fuer die abgeleitete Klasse \"WasserTransportmittel\"--" << endl;

	WasserTransportmittel wt(55.5, 12.1, 22.21);
	wt.bewegen("Westen");
	cout << "Hoehe des LandTransportmittels: " << lt.getHoehe() << endl 
		<< "Breite des LandTransportmittels: " << lt.getBreite() << endl;

	wt.ablegen("Hamburger Hafen");
	wt.anlegen("Hafen von Shanghai");
	cout << "Bruttoregistertonnen: " << wt.getBruttoregistertonnen() << endl;
}