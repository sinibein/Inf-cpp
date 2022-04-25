#pragma once
#include <iostream>
#include <string>

using namespace std;

class Auto
{
private:
	int radzahl;
	string farbe;
	float ps;
	int anzahl_sitze;
	float spritverbrauch;
	float tankinhalt;
	float tankgroesse;

public:
	//Standardkonstruktor
	Auto();

	//allgemeiner Konstruktor
	Auto(int radzahl, string farbe, float ps, int anzahl_sitze, float spritverbrauch, float tankinhalt, float tankgroesse);

	//Kopierkonstruktor
	Auto(const Auto& a);

	//Destruktor
	~Auto();

	//Getter
	float fahren(float strecke);
	int get_radzahl();
	string get_farbe();
	float get_ps();
	int get_anzahl_sitze();
	float get_spritverbrauch();
	float get_tankinhalt();
	float get_tankgroesse();

	void tank_auffuellen(float spritmenge)
	{
		if (spritmenge + tankinhalt > tankgroesse)
		{
			tankinhalt = tankgroesse;
		}
		else
		{
			tankinhalt += spritmenge;
		}
	}
};

