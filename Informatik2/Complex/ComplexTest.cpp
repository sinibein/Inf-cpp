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

}