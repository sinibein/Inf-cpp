#include <iostream>
using namespace std;

int main()
{
	cout << "Wie viele Messwerte m\x94 \bchten Sie eingeben? ";
	int anzahl_messwerte;
	cin >> anzahl_messwerte;

	double *messwerte = new double[anzahl_messwerte];
	for (int i = 0; i < anzahl_messwerte; i++)
	{
		cout << "Messwert Nr." << i + 1 << " eingeben: ";
		cin >> messwerte[i];
	}

	double summe = 0;
	for (int i = 0; i < anzahl_messwerte; i++)
	{
		summe += messwerte[i];
	}
	double mittelwert = summe / anzahl_messwerte;
	
	double s = 0;
	for (int i = 0; i < anzahl_messwerte; i++)
	{
		s += pow(messwerte[i] - mittelwert, 2);
	}
	double varianz = s / (anzahl_messwerte - 1);


	cout << "----------------------" << endl
		<< "Messwerte:" << endl;
	for (int i = 0; i < anzahl_messwerte; i++)
	{
		cout << messwerte[i] << endl;
	}
	cout << "----------------------" << endl
		<< "Mittelwert: " << mittelwert<< endl
		<< "Varianz: " << varianz << endl;

	return 0;
}