#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	int l;
	double laenge{ 100.05 };
	char zeichen;
	l = static_cast<int>(laenge);			//Möglicher Datenverlust bei der Konvertierung vom Typ double zu int, weil double entspricht 64 Bit und int entspricht 32 Bit. Zu große Werte können nicht umgewandelt werden und Nachkommastellen gehen verloren
	zeichen = static_cast<char>(laenge);	//Möglicher Datenverlust bei der Konvertierung vom Typ double in char, weil double entspricht 64 Bit und char entspricht 8 Bit. Werte über 255 (bzw. 127) werden nicht korrekt umgewandelt und Nachkommastellen gehen verloren
	cout << laenge << " " << 1 << " " <<  zeichen << endl;
	/*
	Ausgabe: 100.05 1 d
			Zuerst wird die Variable laenge ausgegeben. Da die unkonvertierte Variable ausgegeben wird, sind Nachkommastellen vorhanden
			Anschließend wird die Ziffer 1 ausgegeben, und dann die Variable zeichen als 'd'. Es wird ein 'd' angezeigt, da der char-Variable zeichen
			zuvor der Wert von laenge zugewiesen wurde. Dabei gingen die Nachkommastellen verloren und es wurde die Zahl 100 abgespeichert. In der ASCII-Tabelle steht
			die 100 für 'd', daher wird dieses Zeichen ausgegeben
	*/

	string messlatte{ "777.77" };
	//laenge = static_cast<double>(messlatte);  //Ein string kann nicht ohne weiteres in ein double konvertiert werden

	istringstream iss;  //Steht so nicht im Skript, aber funktioniert
	iss.str(messlatte);
	iss >> laenge;
	return 0;
}