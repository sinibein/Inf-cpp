#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a = 2;
	int b = 1;

	a = b = 2;
	a = 5 * 3 + 2;			// a = 17 
	a = 5 * (3 + 2);		// a = 25 weil (3+2) zuerst ausgewertet wird
	a *= 5 + 5;				// a = 250 weil 25*(5+5) = 250
	a %= 2 * 3;				// a = 4 weil 2*3 zuerst ausgewertet wird und 250 % 6 = 4
	a = !(--b == 0);	    // (--b) = 1 --> (1==0) ist 0, also wird a = 1
	a = 0 && 0 + 2;			// + wird zuerst ausgewertet, also a = (0 && 2) = 0
	a = b++ * 2;			// b wird erst nach der Anweisung erhöht, daher wird mit b=1 gerechnet. Also ist a = 1*2 = 2
	a = -5 - 5;				// a = -10
	a = -(+b++);			// b=2 --> a = -(+2) = -2 ; danach wird b erhöht -> b wird 3
	a = 5 == 5 && 0 || 1;	// zuerst wird 5==5 ausgewertet, dann (5==5) && 0 und anschließend oder 1. Also a = 1 && 0 || 1 = 1
	a = ((((((b + b) * 2) + b) && b || b)) == b); // b=3 --> (b+b)*2 = 12 --> (12 && 3) = 1 --> 1 || 3 = 1 --> 1==3 = 0, also ist a = 0
	a = b + ++b;			// a = (3+4) = 7
	a = sizeof(int) * sizeof(a);// a ist int und sizeof(int) = 4 --> a = 4*4 = 16

	return 0;

}
