#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	const char service_passwort[] =  "abcdef";

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
	for (;;) {
		cout << fixed << setprecision(1)  //damit bei den Preisen nur eine Nachkommastelle angezeigt wird  
			<<  "Herzlich Willkommen beim Kaffe-Automaten!" << endl
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

			if (!(auswahl_milch == 'j' || auswahl_milch == 'n') || !(auswahl_zucker == 'j' || auswahl_zucker == 'n'))
			{
				cout << "Falsche Eingabe!" << endl;
				system("pause");
				continue;
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

			double einzahlung;
			cin >> einzahlung;
			if (preis-einzahlung > 0.01)
			{
				cout << "Zu wenig Geld, Bestellung abgebrochen" << endl;
				system("pause");
			}
			else
			{
				double rueckgeld = einzahlung - preis;
				cout << "Ihr Getr\x84 \bnk wird zubereitet....." << endl
					<< "Bitte " << abs(einzahlung-preis) << " Euro R\x81 \bckgeld und das Getraenk entnehmen und eine Taske dr\x81 \bcken" << endl; //abs() muss verwendet werden, da sonst manchmal -0.0 Euro Rückgeld angezeigt wird

				vorrat_wasser -= wasser_kaffee;
				vorrat_kaffeebohnen -= pulvermenge;
				if (auswahl_milch == 'j')
				{
					vorrat_milch -= milch;
				}
				if (auswahl_zucker == 'j')
				{
					vorrat_zucker -= zucker;
				}
			}
		}

		else if (zeichen == 'e') {
			char auswahl_zucker, auswahl_milch;

			cout << "Sie haben sich f\x81r die Auswahl Espresso entschieden." << endl
				<< "M\x94 \bchten sie Zucker (j\\n)? ";
			cin >> auswahl_zucker;

			cout << "M\x94 \bchten sie Milch (j\\n)? ";
			cin >> auswahl_milch;

			if (!(auswahl_milch == 'j' || auswahl_milch == 'n') || !(auswahl_zucker == 'j' || auswahl_zucker == 'n'))
			{
				cout << "Falsche Eingabe!" << endl;
				system("pause");
				continue;
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

			double einzahlung;
			cin >> einzahlung;
			if (preis-einzahlung > 0.01)
			{
				cout << "Zu wenig Geld, Bestellung abgebrochen" << endl;
				system("pause");
			}
			else
			{
				cout << "Ihr Getr\x84 \bnk wird zubereitet....." << endl
					<< "Bitte " << abs(einzahlung - preis)<< " Euro R\x81 \bckgeld und das Getraenk entnehmen und eine Taske dr\x81 \bcken" << endl; //abs() muss verwendet werden, da sonst manchmal -0.0 Euro Rückgeld angezeigt wird

				vorrat_wasser -= wasser_espresso;
				vorrat_espressobohnen -= pulvermenge;
				if (auswahl_milch == 'j')
				{
					vorrat_milch -= milch;
				}
				if (auswahl_zucker == 'j')
				{
					vorrat_zucker -= zucker;
				}
			}
		}

		else if (zeichen == 's') 
		{
			cout << "Bitte geben Sie das Passwort ein:";
			char zeichen[6];
			for (int i = 0; i < 6; i++)
			{
				zeichen[i] = _getch();
				cout << "*";
			}
			cout << endl;
			
			bool passwort_korrekt = true;
			for (int i = 0; i < 6; i++)
			{
				if (zeichen[i] != service_passwort[i])
				{
					passwort_korrekt = false;
					cout << "Falsches Passwort! Zugang zum Service-Interface verweigert!" << endl;
					system("pause");
					break;
				}
			}
			if (!passwort_korrekt) continue;
			

			cout << "Service-Interface" << endl
				<< "------------------------------------" << endl
				<< "Noch vorhandene Mengen:" << endl
				<< "Kaffee: " << vorrat_kaffeebohnen << "g  Milch: " << vorrat_milch << "ml" << endl
				<< "Espresso: " << vorrat_espressobohnen << "g  Wasser: " << vorrat_wasser << "ml" << endl
				<< "Zucker: " << vorrat_zucker << "g" << endl
				<< "------------------------------------" << endl
				<< "Mengen pro Tasse:" << endl
				<< "Kaffe: " << pulvermenge << "g  Milch: " << milch << "ml" << endl
				<< "Espresso: " << pulvermenge << "g  Wassser f\x81r Kaffee: " << wasser_kaffee << "ml" << endl
				<< "Zucker: " << zucker << "g  Wasser f\x81r Espresso: " << wasser_espresso << "ml" << endl
				<< "------------------------------------" << endl;
			system("pause");
		}

		else if (zeichen == '!')
		{
			return 0;
		}

		else {
			cout << "Ung\x81ltige Auswahl." << endl;
		}
	}
}