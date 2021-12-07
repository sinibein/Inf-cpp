#include <iostream>
using namespace std;

int main()
{
	int l;
	double laenge{ 100.05 };
	char zeichen;
	l = laenge;
	zeichen = laenge;
	cout << laenge << " " << 1 << zeichen << endl;
	string messlatte{ "777.77" };
	laenge = static_cast<double>(messlatte);

	return 0;
}