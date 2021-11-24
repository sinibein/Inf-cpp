#include <iostream>
using namespace std;

int main()
{
	char zeichen;

	cout << "Herzlich Willkommen beim Kaffe-Automaten!" << endl
		<< "Bitte w\x0084hlen Sie aus:" << endl
		<< "(k) Kaffee" << endl
		<< "(e) Espresso" << endl
		<< "(s) Service-Mode" << endl;

	cin >> zeichen;
	cout << "Sie haben sich f\x0081r Auswahl " << zeichen << " entschieden";
}