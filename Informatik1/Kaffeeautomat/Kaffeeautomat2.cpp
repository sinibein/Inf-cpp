#include<iostream>		
#include <string> 

using namespace std;

int main()
{

	char x;
	

	system("cls");

	cout << "Herzlich Willkommen beim Kaffee - Automaten!\n";
	cout << "Bitte waehlen Sie aus:\n";
	cout << "(k) Kaffee\n";
	cout << "(e) Espresso\n";
	cout << "(s) Service-Mode\n";

	std::cin >> x;

	if (x == 'k') {
		cout << "Sie haben sich fuer die Auswahl Kaffee entschieden.";
	}

	else if (x == 'e') {
		cout << "Sie haben sich fuer die Auswahl Espresso entschieden.";
	}

	else if (x == 's') {
		cout << "Sie haben sich fuer die Auswahl Service-Mode entschieden.";
	}

	else {
		cout << "Ungueltige Auswahl.";
	}

	system("pause");

	return 0;
}