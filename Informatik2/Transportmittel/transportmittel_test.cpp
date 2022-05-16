#include <iostream>
#include "Transportmittel.h"
#include "LandTransportmittel.h"
#include "WasserTransportmittel.h"
#include "Fahrrad.h"
#include "Rikscha.h"
#include "Auto.h"

using namespace std;

int main()
{
	//Basisklasse erstellen und testen
	cout << "---Test fuer die Basisklasse \"Transportmittel\"---" << endl;

	Transportmittel t(20.12, 40.543);
	t.bewegen("Norden");

	cout << "Hoehe des Transportmittels: " << t.getHoehe() << endl 
		 << "Breite des Transportmittels: " << t.getBreite() << endl;


	//LandTransportmittel erstellen und testen
	cout << endl << endl << "---Test fuer die abgeleitete Klasse \"LandTransportmittel\"---" << endl;
	
	LandTransportmittel lt(32.542, 5.11, 4);
	lt.bewegen("Osten");
	cout << "Hoehe des LandTransportmittels: " << lt.getHoehe() << endl
		<< "Breite des LandTransportmittels: " << lt.getBreite() << endl;
		
	lt.fahren(5.2);
	lt.schieben(0.2);
	cout << "Anzahl der Raeder: " << lt.getRadzahl() << endl;

	//WasserTransportmittel erstellen und testen
	cout << endl << endl << "---Test fuer die abgeleitete Klasse \"WasserTransportmittel\"---" << endl;

	WasserTransportmittel wt(55.5, 12.1, 22.21);
	wt.bewegen("Westen");
	cout << "Hoehe des LandTransportmittels: " << wt.getHoehe() << endl 
		<< "Breite des LandTransportmittels: " << wt.getBreite() << endl;

	wt.ablegen("Hamburger Hafen");
	wt.anlegen("Hafen von Shanghai");
	cout << "Bruttoregistertonnen: " << wt.getBruttoregistertonnen() << endl;


	//Fahrrad erstellen und testen
	cout << endl << endl << "---Test fuer die abgeleitete Klasse \"Fahrrad\"--" << endl;

	Fahrrad f(4.2, 1.0, 27);
	f.bewegen("Norden");
	cout << "Hoehe des Fahrrads: " << f.getHoehe() << endl
		<< "Breite des Fahrrads: " << f.getBreite() << endl;

	f.fahren(2.3);
	f.freihaendigfahren("Nils");
	f.schieben(3.3);
	cout << "Das Fahrrad hat " << f.getRadzahl() << " Raeder" << endl;
	cout << "Das Fahrrad hat " << f.getAnzahlgaenge() << " Gaenge" << endl;



	//Rikscha erstellen und testen
	cout << endl << endl << "---Test fuer die abgeleitete Klasse \"Rikscha\"--" << endl;

	Rikscha r(2.2, 3.0, "rot");
	r.bewegen("Links");
	cout << "Hoehe der Rikscha: " << r.getHoehe() << endl
		<< "Breite der Rikscha: " << r.getBreite() << endl;
	r.fahren(1.1);
	r.ziehen(2);
	r.schieben(3123.1);
	cout << "Die Rikscha hat " << r.getRadzahl() << " Raeder" << endl;
	cout << "Die Rikscha hat die Farbe " << r.getFarbe() << endl;



	//Auto erstellen und testen
	cout << endl << endl << "---Test fuer die abgeleitete Klasse \"Auto\"--" << endl;

	Auto a(5.0, 6.7, 7.7);
	a.bewegen("Rechts");
	cout << "Hoehe des Autos: " << a.getHoehe() << endl
		<< "Breite des Autos: " << a.getBreite() << endl;
	a.fahren(3);
	a.schieben(33);
	a.tanken(20.1);
	cout << "Das Auto hat " << a.getRadzahl() << " Raeder" << endl;
	cout << "Der Spritverbrauch ist " << a.getSpritverbrauch() << "l/100km" << endl;
}