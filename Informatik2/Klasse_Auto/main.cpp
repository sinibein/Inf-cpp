#include "Auto.h"

//Objekt im Datensegment erstellen, allgemeinen Konstruktor aufrufen
Auto a(4, "weiﬂ", 50, 5, 5, 10, 40.3);

int main()
{
	cout << "Stecke gefahren: " << a.fahren(205) << endl;;

	cout << "Radzahl: " << a.get_radzahl() << endl
		<< "Farbe: " << a.get_farbe() << endl
		<< "PS: " << a.get_ps() << endl
		<< "Anzahl Sitze: " << a.get_anzahl_sitze() << endl
		<< "Spritverbrauch: " << a.get_spritverbrauch() << endl
		<< "Tankinhalt: " << a.get_tankinhalt() << endl
		<< "Tankgroesse: " << a.get_tankgroesse() << endl;

	a.tank_auffuellen(50);
	cout << "Tankinhalt nach auffuellen: " << a.get_tankinhalt() << endl;


	//Objekt auf dem Stack erstellen, Standardkonstruktor aufrufen
	Auto b;

	//Objekt auf dem Heap erstellen, Standardkonstruktor aufrufen
	Auto* c = new Auto();

	//Objekt vom Heap lˆschen, Destruktor aufrufen
	delete c;

	//Kopierkonstruktor aufrufen
	Auto d = b;
}