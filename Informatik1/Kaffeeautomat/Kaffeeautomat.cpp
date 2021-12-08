#include <iostream>
using namespace std;

int main()
{
	int vorrat_kaffeebohnen = 1000;
	int vorrat_espressobohnen = 1000;
	int vorrat_wasser = 5000;
	int vorrat_milch = 1000;
	int vorrat_zucker = 500;

	int pulvermenge = 5;
	int wasser_kaffee = 125;
	int wasser_espresso = 25;
	int zucker = 3;
	int milch = 30;

	double preis_tasse = 1.0;
	double aufpreis = 0.1;

	cout << "Herzlich Willkommen beim Kaffe-Automaten!" << endl
		<< "Preis pro Tasse:" << endl
		<< "Kaffee oder Espresso: " << preis_tasse << " Euro" << endl
		<< "Milch oder Zucker:  " << aufpreis << " Euro" << endl
		<< endl 
		<< "Bitte w\x0084hlen Sie aus:" << endl
		<< "(k) Kaffee" << endl
		<< "(e) Espresso" << endl
		<< "(s) Service-Mode" << endl;


	char zeichen;
	std::cin >> zeichen;

	if (zeichen == 'k') {
		char auswahl_zucker, auswahl_milch;
		
		cout << "Sie haben sich f\x81r die Auswahl Kaffee entschieden." << endl
			<< "M\x94 \bchten sie Zucker (j\\n)? ";
		cin >> auswahl_zucker;

		cout << "M\x94 \bchten sie Milch (j\\n)? ";
		cin >> auswahl_milch;

		if ( !(auswahl_milch == 'j' || auswahl_milch == 'n') || !(auswahl_zucker == 'j' || auswahl_zucker == 'n'))
		{
			cout << "Falsche Eingabe!" << endl;
			system("pause");
			return 0;
		}

		double preis = preis_tasse;
		if (auswahl_milch == 'j')
		{
			preis += aufpreis;
		}
		if (auswahl_zucker == 'j')
		{
			preis += aufpreis;
		}
		cout << "Bitte " << preis << " Euro eingeben und ENTER druecken: " << endl;
	}

	else if (zeichen == 'e') {
		cout << "Sie haben sich f\x81r die Auswahl Espresso entschieden.";
	}

	else if (zeichen == 's') {
		cout << "Sie haben sich f\x81r die Auswahl Service-Mode entschieden.";
	}

	else {
		cout << "Ung\x81ltige Auswahl.";
	}
}