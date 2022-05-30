#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		cerr << "Fehler: kein Zeichen angegeben" << endl;
		return -1;
	}

	char zeichen = argv[1][0];
	char maskiertesZeichen = zeichen ^ (1 << 5);
	cout << maskiertesZeichen << endl;

	return 0;
}