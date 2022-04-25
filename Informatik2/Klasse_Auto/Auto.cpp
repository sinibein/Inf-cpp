#include "Auto.h"

//Standardkonstruktor
Auto::Auto()
{
	cout << "Standardkonstruktor aufgerufen" << endl;
	radzahl = 0;
	farbe = "";
	ps = 0.0;
	anzahl_sitze = 0;
	spritverbrauch = 0.0;
	tankinhalt = 0.0;
	tankgroesse = 0.0;
}

//Allgemeiner Konstruktor
Auto::Auto(int radzahl, string farbe, float ps, int anzahl_sitze, float spritverbrauch, float tankinhalt, float tankgroesse)
	:radzahl(radzahl), farbe(farbe), ps(ps), anzahl_sitze(anzahl_sitze), spritverbrauch(spritverbrauch), tankinhalt(tankgroesse), tankgroesse(tankgroesse)
{
	cout << "Allgemeiner Konstruktor aufgerufen" << endl;
};

//Kopierkonstruktor
Auto::Auto(const Auto& a) :radzahl(a.radzahl), farbe(a.farbe), ps(a.ps), anzahl_sitze(a.anzahl_sitze), spritverbrauch(a.spritverbrauch), tankinhalt(a.tankgroesse), tankgroesse(a.tankgroesse)
{
	cout << "Kopierkonstruktor aufgerufen" << endl;
}

//Destruktor
Auto::~Auto()
{
	cout << "Destruktor aufgerufen" << endl;
}