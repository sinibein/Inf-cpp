#include <iostream>
using namespace std;

int main()
{
	int l;
	double laenge{ 100.05 };
	char zeichen;
	l = laenge;			//M�glicher Datenverlust bei der Konvertierung vom Typ double zu int, weil double entspricht 64 Bit und int entspricht 32 Bit. Zu gro�e Werte k�nnen nicht umgewandelt werden und Nachkommastellen gehen verloren
	zeichen = laenge;	//M�glicher Datenverlust bei der Konvertierung vom Typ double in char, weil double entspricht 64 Bit und char entspricht 8 Bit. Werte �ber 255 (bzw. 127) werden nicht korrekt umgewandelt und Nachkommastellen gehen verloren
	cout << laenge << " " << 1 << zeichen << endl;
	string messlatte{ "777.77" };
	laenge = static_cast<double>(messlatte);  //Ein string kann nicht ohne weiteres in ein double konvertiert werden

	return 0;
}