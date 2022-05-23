#pragma once
#include <iostream>
using namespace std;

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
	Complex operator/(const Complex& c);

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



ostream& operator<<(ostream& os, Complex& c)
{
	if(c.getImaginaerteil() >= 0)
		os << c.getRealteil() << "+" << c.getImaginaerteil() << "i";
	else
		os << c.getRealteil() << "-" << abs(c.getImaginaerteil()) << "i";

	return os;
}

istream& operator>>(istream& is, Complex& c)
{
	double Re=0, Im=0;
	is >> Re >> Im;

	c.setRealteil(Re);
	c.setImaginaerteil(Im);

	return is;
}


Complex Complex::operator/(const Complex& c2)
{
	double re, im,
		a = this->re,
		b = this->im,
		c = c2.re,
		d = c2.im;
	
	re = (a * c + b * d) / (c * c + d * d);
	im = (b * c - a * d) / (c * c + d * d);
	return Complex(re, im);
}

