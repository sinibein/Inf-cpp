#include <iostream>
#include <iomanip>
#include <conio.h>
#include "kaffeeautomat.h"


int main()
{
	daten kaffee;

	for (;;) {
		double preis = 0.0;
		bool bkaffee = false, bmilch = false, bzucker = false, bespresso = false, bservice = false;

		if (!UI(&bkaffee, &bmilch, &bzucker, &bespresso, &bservice, kaffee))
		{
			break;
		}

		if (bservice)
		{
			SI(kaffee);
		}
		else {
			preis = preis_berechnen(bkaffee, bmilch, bzucker, bespresso, kaffee);

			cout << "Bitte " << preis << " Euro eingeben und ENTER druecken: " << endl;

			double einzahlung;
			cin >> einzahlung;
			if (preis - einzahlung > 0.01)
			{
				cout << "Zu wenig Geld, Bestellung abgebrochen" << endl;
				system("pause");
			}
			else
			{
				double rueckgeld = einzahlung - preis;
				mengen_aktualisieren(bkaffee, bmilch, bzucker, bespresso, &kaffee);
				cout << "Ihr Getr\x84 \bnk wird zubereitet....." << endl
					<< "Bitte " << abs(einzahlung - preis) << " Euro R\x81 \bckgeld und das Getraenk entnehmen und eine Taske dr\x81 \bcken" << endl; //abs() muss verwendet werden, da sonst manchmal -0.0 Euro Rückgeld angezeigt wird
				system("pause");
			}
		}
	}
}