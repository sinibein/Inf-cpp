#pragma once

class Complex {
private:
	double re, im;
public:
	Complex(double Re, double Im);
	double getRealteil();
	double getImaginaerteil();
	void setRealteil(double Re);
	void setImaginaerteil(double Im);

	Complex operator+(const Complex& c);
	Complex operator-(const Complex& c);
};

Complex::Complex(double Re, double Im): re(Re), im(Im)
{
}

double Complex::getRealteil()
{
	return this->re;
}

double Complex::getImaginaerteil() 
{
	return this->im;
}

void Complex::setRealteil(double Re)
{
	this->re = Re;
}

void Complex::setImaginaerteil(double Im)
{
	this->im = Im;
}

Complex Complex::operator+(const Complex& c)
{
	return Complex(this->re + c.re, this->im + c.im);
}

Complex Complex::operator-(const Complex& c)
{
	return Complex(this->re - c.re, this->im - c.im);
}
