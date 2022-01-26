//pragma once sorgt dafür, dass der Inhalt dieser Datei nur einmal eingelesen wird
#pragma once
#define TEST

using namespace std;


//(#X) liefert den Namen der übergebenen Variable X
#define PRINTVARIABLE(X) cout << endl << (#X) << "=" << (X) << endl
#define PRINTSTRING(X) cout << endl << X << endl

struct daten
{
	int vorrat_kaffeebohnen = 1000;
	int vorrat_espressobohnen = 1000;
	int vorrat_wasser = 5000;
	int vorrat_milch = 1000;
	int vorrat_zucker = 500;

	int menge_kaffee_pro_tasse = 5;
	int menge_espresso_pro_tasse = 5;
	int wasser_pro_tasse_kaffee = 125;
	int wasser_pro_tasse_espresso = 25;
	int menge_zucker_pro_tasse = 3;
	int menge_milch_pro_tasse = 30;

	double preis_pro_tasse = 1.0;
	double preis_zutaten_pro_tasse = 0.1;
};


void SI(daten kaffee);
void mengen_aktualisieren(bool bkaffee, bool bmilch, bool bzucker, bool bespresso, daten* pkaffee);
double preis_berechnen(bool bkaffee, bool bmilch, bool bzucker, bool bespresso, daten kaffee);
void UI_zusaetze_kaffee(bool beide, bool* pbmilch, bool* pbzucker);
bool UI(bool* pbkaffee, bool* pbmilch, bool* pbzucker, bool* pbespresso, bool* pbservice, daten kaffee);



