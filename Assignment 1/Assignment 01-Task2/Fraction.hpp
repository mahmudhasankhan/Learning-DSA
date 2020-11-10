#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator) {
    this->numerator=numerator;
    if(denominator==0){
        this->denominator=1;
    }else
        this->denominator= denominator;

}
Fraction::Fraction(){
 numerator=0;
 denominator=1;
}
int Fraction::getNumerator() {
    return numerator;
}
int Fraction::setNumerator(int numerator) {
    return this->numerator=numerator;
}
int Fraction::getDenominator() {
    return denominator;
}
int Fraction::setDenominator(int denominator) {
    return this->denominator=denominator;
}