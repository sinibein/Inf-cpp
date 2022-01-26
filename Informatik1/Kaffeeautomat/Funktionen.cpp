#include <iostream>
#include <iomanip>
#include <conio.h>
#include "kaffeeautomat.h"

void SI(daten kaffee)
{
	const char service_passwort[] = "abcdef";

#ifdef TEST
	PRINTVARIABLE(service_passwort);
#endif#

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
	if (!passwort_korrekt) return;


	cout << "Service-Interface" << endl
		<< "------------------------------------" << endl
		<< "Noch vorhandene Mengen:" << endl
		<< "Kaffee: " << kaffee.vorrat_kaffeebohnen << "g  Milch: " << kaffee.vorrat_milch << "ml" << endl
		<< "Espresso: " << kaffee.vorrat_espressobohnen << "g  Wasser: " << kaffee.vorrat_wasser << "ml" << endl
		<< "Zucker: " << kaffee.vorrat_zucker << "g" << endl
		<< "------------------------------------" << endl
		<< "Mengen pro Tasse:" << endl
		<< "Kaffe: " << kaffee.menge_kaffee_pro_tasse << "g  Milch: " << kaffee.menge_milch_pro_tasse << "ml" << endl
		<< "Espresso: " << kaffee.menge_espresso_pro_tasse << "g  Wassser f\x81r Kaffee: " << kaffee.wasser_pro_tasse_kaffee << "ml" << endl
		<< "Zucker: " << kaffee.menge_zucker_pro_tasse << "g  Wasser f\x81r Espresso: " << kaffee.wasser_pro_tasse_espresso << "ml" << endl
		<< "------------------------------------" << endl;
	system("pause");
}

void mengen_aktualisieren(bool bkaffee, bool bmilch, bool bzucker, bool bespresso, daten* pkaffee)
{
	if (bkaffee)
	{
		pkaffee->vorrat_wasser -= pkaffee->wasser_pro_tasse_kaffee;
		pkaffee->vorrat_kaffeebohnen -= pkaffee->menge_kaffee_pro_tasse;
	}
	else if (bespresso)
	{
		pkaffee->vorrat_wasser -= pkaffee->wasser_pro_tasse_espresso;
		pkaffee->vorrat_wasser -= pkaffee->wasser_pro_tasse_espresso;
	}
	if (bmilch == 'j')
	{
		pkaffee->vorrat_milch -= pkaffee->menge_milch_pro_tasse;
	}
	if (bzucker == 'j')
	{
		pkaffee->vorrat_zucker -= pkaffee->menge_zucker_pro_tasse;
	}
}

double preis_berechnen(bool bkaffee, bool bmilch, bool bzucker, bool bespresso, daten kaffee)
{
	double preis = kaffee.preis_pro_tasse;
	if (bmilch)
	{
		preis += kaffee.preis_zutaten_pro_tasse;
	}
	if (bzucker)
	{
		preis += kaffee.preis_zutaten_pro_tasse;
	}
	return preis;
}

void UI_zusaetze_kaffee(bool beide, bool* pbmilch, bool* pbzucker)
{
	char auswahl;
	if (beide)
	{
		cout << "M\x94 \bchten sie Milch (j\\n)? ";
		cin >> auswahl;
		if (auswahl == 'j')
		{
			*pbmilch = true;
		}
	}

	cout << "M\x94 \bchten sie Zucker (j\\n)? ";
	cin >> auswahl;
	if (auswahl == 'j')
	{
		*pbzucker = true;
	}

#ifdef TEST
	PRINTVARIABLE(*pbmilch);
	PRINTVARIABLE(*pbzucker);
#endif // TEST

}

bool UI(bool* pbkaffee, bool* pbmilch, bool* pbzucker, bool* pbespresso, bool* pbservice, daten kaffee)
{
	system("cls");
	for (;;) {
#ifdef TEST
		PRINTSTRING("Zum beenden '!' dr\x81 \bcken");
#endif 

		cout << fixed << setprecision(1)  //damit bei den Preisen nur eine Nachkommastelle angezeigt wird  
			<< "Herzlich Willkommen beim Kaffe-Automaten!" << endl
			<< "Preis pro Tasse:" << endl
			<< "Kaffee oder Espresso: " << kaffee.preis_pro_tasse << " Euro" << endl
			<< "Milch oder Zucker:  " << kaffee.preis_zutaten_pro_tasse << " Euro" << endl
			<< endl
			<< "Bitte w\x0084hlen Sie aus:" << endl
			<< "(k) Kaffee" << endl
			<< "(e) Espresso" << endl
			<< "(s) Service-Mode" << endl;

		char zeichen;
		std::cin >> zeichen;
		if (zeichen == 'k')
		{
			cout << "Sie haben sich f\x81r die Auswahl Kaffee entschieden." << endl;
			UI_zusaetze_kaffee(true, pbmilch, pbzucker);
			*pbkaffee = true;
			return true;
		}
		else if (zeichen == 'e')
		{
			cout << "Sie haben sich f\x81r die Auswahl Espresso entschieden." << endl;
			UI_zusaetze_kaffee(false, pbmilch, pbzucker);
			*pbespresso = true;
			return true;
		}
		else if (zeichen == 's')
		{
			*pbservice = true;
			return true;
		}
		else if (zeichen == '!')
		{
			return false;
		}
		else {
			cout << "Ung\x81ltige Auswahl." << endl;
		}
	}
}