#include<iostream>											
using namespace std;

int main() {

	double Messwerte [10] = {99.975, 100.002, 99.999, 99.982, 100.100, 100.009, 99.826, 100.547, 100.023, 100.008};
	double mittelw, varianz, sum1{ 0 }, sum2{ 0 },
	int n = sizeof(Messwerte) / sizeof(Messwerte[0]);

	//Mittelwert berechenen

	for (int i =0; i < n; i++)
		sum1 += Messwerte[i];

	mittelw = sum1 / double(n);


	// Varianz berechnen

	for (int i = 0; i < n; i++)
		sum2 += pow((Messwerte[i] - mittelw),2);
	

	varianz = sum2 / (double(n)-1);

	cout << "Mittelwert = " << mittelw << "\nVarianz = " << varianz << endl;

	return 0;

}



