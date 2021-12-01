#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string vorname, nachname;
	cout << "Bitte Namen eingeben: ";
	cin >> vorname >> nachname;
		
	string wohnort;
	int postleitzahl;
	cout << "Bitte Postleitzahl und Wohnort eingeben: ";
	cin >> postleitzahl >> wohnort;

	string strasse;
	int hausnummer;
	cout << "Bitte Stra\xE1 \be und Hausnummer eingeben: ";
	cin >> strasse >> hausnummer;


	string plz_str, hausnummer_str;
	ostringstream wandler;
	wandler << postleitzahl;
	plz_str = wandler.str();
	wandler.str("");
	wandler << hausnummer;
	hausnummer_str = wandler.str();

	string ausgabe = vorname + " " + nachname + "\n" + plz_str + " " + wohnort + "\n" + strasse + " " + hausnummer_str;
	
	cout << ausgabe;
	return 0;
}