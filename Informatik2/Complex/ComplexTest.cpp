#include <iostream>
#include "Complex.h"
using namespace std;



int main()
{
	
	Complex c1(32.0, 5.0);
	Complex c2(1.0, 2.0);

	Complex c3 = c1 + c2;
	cout << c3.getRealteil() << " + " << c3.getImaginaerteil() << "i" << endl;

	Complex c4 = c2 - c1;
	cout << c4.getRealteil() << " + " << c4.getImaginaerteil() << "i" << endl;

	cout << "Komplexe Zahl im Format \"a+bi\" eingeben: ";
	cin >> c4;
	cout << c4 << endl;

	cout << "Division von Komplexen Zahlen:" << endl;
	Complex c5(4, 3);
	Complex c6(2, 2);
	cout << "z1 = " << c5 << endl;
	cout << "z2 = " << c6 << endl;
	Complex c7 = (c5 / c6);
	cout << "z1/z2 = " << c7 << endl;

	cout << "Division durch Null:" << endl;
	Complex c0(0, 0);
	try {
		Complex c8 = c5 / c0;
	}
	catch (invalid_argument& e)
	{
		cout << e.what();
	}
}