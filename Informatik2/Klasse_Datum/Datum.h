#pragma once
#include <iostream>
using namespace std;



class Datum
{
private:
	int tag, monat, jahr;
	static int anzahl_objekte;
	static bool plappern;
public:
	Datum(int Tag, int Monat, int Jahr);
	~Datum();
	int TagDesJahres();
	
	static void Plappern(bool plappern);
	static int istSchaltjahr(int irgendeinJahr);
};

