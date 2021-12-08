#include<iostream>		

using namespace std;

int main()
{
	int i, k, n;

	i = 101, k = 5, n = 10;
	while (i > 0) k = 2 * k; // Endlosschleife, da i immer größer 0 ist. 

	i = 101, k = 5, n = 10;
	while (i != 0) i = i - 2; // Endlosschleife, da i immer ungleich 0 ist. 

	i = 101, k = 5, n = 10;
	while (n != i) { // Endlosschleife n und i sind niemals gleich, da n immer das doppelte von i ist.
		++i;
		n = 2 * i;
	}
}