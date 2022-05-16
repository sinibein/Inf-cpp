#include <iostream>
#include "Transportmittel.h"

using namespace std;

int main()
{
	Transportmittel t(20.12, 40.543);
	t.bewegen("Norden");

	cout << "Breite des Transportmittels: " << t.getBreite() << endl
		<< "Hoehe des Transportmittels: " << t.getHoehe() << endl;
}