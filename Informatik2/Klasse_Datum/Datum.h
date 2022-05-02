#pragma once
class Datum
{
private:
	int tag, monat, jahr;

public:
	Datum(int Tag, int Monat, int Jahr);
	int TagDesJahres();

	static int istSchaltjahr(int irgendeinJahr);
};

