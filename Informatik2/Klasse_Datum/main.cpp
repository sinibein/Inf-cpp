#include <iostream>
#include "Datum.h"

using namespace std;

int main()
{	
	int tag = 20, monat = 10, jahr = 2024;
	Datum a(tag, monat, jahr);
	cout << "Datum erstellt: " << tag << "." << monat << "." << jahr << "     ist Schaltjahr: " << Datum::istSchaltjahr(jahr) << "       Tag des Jahres: " << a.TagDesJahres() << endl;


	tag = 1, monat = 5, jahr = 2015;
	Datum b(tag, monat, jahr);
	cout << "Datum erstellt: " << tag << "." << monat << "." << jahr << "     ist Schaltjahr: " << Datum::istSchaltjahr(jahr) << "       Tag des Jahres: " << b.TagDesJahres() << endl;


	tag = 20, monat = 10, jahr = 2015;
	Datum c(tag, monat, jahr);
	cout << "Datum erstellt: " << tag << "." << monat << "." << jahr << "     ist Schaltjahr: " << Datum::istSchaltjahr(jahr) << "       Tag des Jahres: " << c.TagDesJahres() << endl;
	
}