#include <iostream>
#include <numbers>
#include <cmath>
using namespace std;

bool berechne_kugeldaten(double radius, double* p_oberflaeche, double* p_volumen)
{
	if (radius < 0)
		return false;

	*p_oberflaeche =4 * 3.14 * pow(radius, 2);
	*p_volumen = (4.0/3.0) * 3.14 * pow(radius, 3);

	return true;
}

int main()
{
	double radius = -2.0;
	double oberflaeche;
	double volumen;

	if (berechne_kugeldaten(radius, &oberflaeche, &volumen))
	{
		cout << "Radius: " << radius << "\tOberfl\x84 \bche: " << oberflaeche << "\tVolumen: " << volumen << endl;
	}
}