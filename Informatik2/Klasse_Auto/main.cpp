#include "Auto.h"

//Objekt im Datensegment erstellen, allgemeinen Konstruktor aufrufen
Auto a(4, "wei�", 50, 5, 5, 10, 40.3);

int main()
{
	//Objekt auf dem Stack erstellen, Standardkonstruktor aufrufen
	Auto b;

	//Objekt auf dem Heap erstellen, Standardkonstruktor aufrufen
	Auto* c = new Auto();

	//Objekt vom Heap l�schen, Destruktor aufrufen
	delete c;

	//Kopierkonstruktor aufrufen
	Auto d = b;
}