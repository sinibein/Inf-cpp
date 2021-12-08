#include<iostream>
using namespace std;

int main()
{
    int i, j;
    i = 0; j = -5;
    if(i++ || j++) ++i; // i wird erst ausgewertet, dann auf 1 erhöht, dann wird j ausgewertet und anschließend erhöht. 
                        //Da j beim auswertern den Wert -5 hat, wird die nächste Anweisung ausgefüht un i wieder um 1 erhöht 
    cout << i << ',' << j << endl;
    i = 1; j = -5;
    if(i++ || j++) ++i; //i wird ausgewertet und anschließend erhöht. 
                        //Da i=1 ist, wird j nicht mehr überprüft und die nächste Anweisung wird ausgefüht -> i wird um 1 erhöht
    cout << i << ',' << j << endl;
    i = 0; j = -5;
    if(i++ && j++) ++i; //i wird ausgewertet, bevor es erhöht. Da i beim auswerten 0 ist, wird j nicht mehr ausgewerter und die nächste Anweisung wird übersprungen
    cout << i << ',' << j << endl;
    i = 1; j = -5;
    if(i++ && j++) ++i; //i und j sind beim auswerten 1 und -5, nach dem auswerten werden beide Variablen um 1 erhöht
                        //Da beim auswerten i=1 und j=-5 ist, wird die nächste Anweisung ausgeführt und i wieder um 1 erhöht
    cout << i << ',' << j << endl;
 }