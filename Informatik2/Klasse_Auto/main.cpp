#include "Auto.h"

//Objekt im Datensegment erstellen
Auto a;

int main()
{
	//Objekt auf dem Stack erstellen
	Auto b;
	
	//Objekt auf dem Heap erstellen
	Auto* c = new Auto();
	//Objekt vom Heap löschen
	delete c;
}