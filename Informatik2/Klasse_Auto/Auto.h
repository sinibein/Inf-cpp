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
};

