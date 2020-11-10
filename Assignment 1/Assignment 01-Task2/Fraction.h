#ifndef FRACTION_H
#define FRACTION_H
class Fraction{
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator);
    Fraction();
   int getNumerator();
   int setNumerator(int numerator);
   int getDenominator();
   int setDenominator(int denominator);
};














#include "Fraction.hpp"
#endif