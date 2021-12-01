#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a = 2;
	int b = 1;

	a = b = 2;
	a = 5 * 3 + 2;
	a = 5 * (3 + 2);
	a *= 5 + 5;
	a %= 2 * 3;
	a = !(--b == 0);
	a = 0 && 0 + 2;
	a = b++ * 2;
	a = -5 - 5;
	a = -(+b++);
	a = 5 == 5 && 0 || 1; a = ((((((b + b) * 2) + b) && b || b)) == b);
	a = b + ++b;
	a = sizeof(int) * sizeof(a);// 4*4 = 16

	return 0;

}
