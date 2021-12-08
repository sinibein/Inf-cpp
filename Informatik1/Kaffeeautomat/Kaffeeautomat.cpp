#include <iostream>
using namespace std;

int main()
{
	int kaffeebohnen = 1000;
	int espressobohnen = 1000;
	int wasser = 5000;
	int milch = 1000;
	int zucker = 500;

	cout << "Herzlich Willkommen beim Kaffe-Automaten!" << endl
		<< "Bitte w\x0084hlen Sie aus:" << endl
		<< "(k) Kaffee" << endl
		<< "(e) Espresso" << endl
		<< "(s) Service-Mode" << endl;


	char zeichen;
	std::cin >> zeichen;

	if (zeichen == 'k') {
		cout << "Sie haben sich f\x81r die Auswahl Kaffee entschieden.";
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