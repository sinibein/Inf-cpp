#include <iostream>
using namespace std;


void mittelwert_varianz(double* messwerte, int anzahl_messwerte, double& r_mittelwert, double& r_varianz);

int main()
{
	cout << "Wie viele Messwerte m\x94 \bchten Sie eingeben? ";
	int anzahl_messwerte;
	cin >> anzahl_messwerte;

	double* messwerte = new double[anzahl_messwerte];
	for (int i = 0; i < anzahl_messwerte; i++)
	{
		cout << "Messwert Nr." << i + 1 << " eingeben: ";
		cin >> messwerte[i];
	}

	double mittelwert, varianz;
	mittelwert_varianz(messwerte, anzahl_messwerte, mittelwert, varianz);

	cout << "----------------------" << endl
		<< "Messwerte:" << endl;
	for (int i = 0; i < anzahl_messwerte; i++)
	{
		cout << messwerte[i] << endl;
	}
	cout << "----------------------" << endl
		<< "Mittelwert: " << mittelwert<< endl
		<< "Varianz: " << varianz << endl;


	delete[] messwerte;

	return 0;
}

void mittelwert_varianz(double* messwerte, int anzahl_messwerte, double& r_mittelwert, double& r_varianz)
{
	double summe = 0;
	for (int i = 0; i < anzahl_messwerte; i++)
	{
		summe += messwerte[i];
	}
	r_mittelwert = summe / anzahl_messwerte;

	double s = 0;
	for (int i = 0; i < anzahl_messwerte; i++)
	{
		s += pow(messwerte[i] - r_mittelwert, 2);
	}
	r_varianz = s / (anzahl_messwerte - 1);

}