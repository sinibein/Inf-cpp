#pragma once
#include <string>
#include <iostream>
using namespace std;

class Transportmittel
{
private:
	double hoehe, breite;

public:
	Transportmittel(double Hoehe, double Breite);

	void bewegen(string Richtung);
	double getHoehe();
	double getBreite();
};

