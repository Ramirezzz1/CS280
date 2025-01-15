#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using std::ostream;

struct Complex{
    //Constructor 
    Complex(double real = 0.0, double imag = 0.0);
    //Overloaded operators 
    Complex operator+(const Complex &) const;
    Complex operator-(const Complex &) const;
    Complex operator*(const Complex &) const;
    Complex operator/(const Complex &) const;

    Complex operator+(double) const;
    Complex operator-(double) const;
    Complex operator*(double) const;
    Complex operator/(double) const;

    friend Complex operator+(double, const Complex &);
    friend Complex operator-(double, const Complex &);
    friend Complex operator*(double, const Complex &);
    friend Complex operator/(double, const Complex &);

    //For stream instertion / output
    friend ostream &operator<<(ostream &, const Complex &);

    private:
    double realNum;
    double imagNum;
};

#endif 