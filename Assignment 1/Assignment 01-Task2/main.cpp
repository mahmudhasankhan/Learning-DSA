#include <iostream>
#include "Fraction.h"
using namespace std;
int main() {

    cout<<"//Creating object 1 Using normal constructor"<<endl;
    Fraction f1(4,0); /*deliberately used zero in denominator to check if it returns 1*/
    cout<<"Numerator = "<<f1.getNumerator()<<endl;              /*used to check if getters work fine or not*/
    cout<<"Denominator = "<<f1.getDenominator()<<endl;
    f1.setDenominator(5);                           /*used to check if setters work fine or not*/
    f1.setNumerator(2);
    cout<<"Numerator = "<<f1.getNumerator()<<endl;
    cout<<"Denominator = "<<f1.getDenominator()<<endl;

    cout<<"// Creating object 2 Using default overloaded constructor"<<endl;
    Fraction f2;
    cout<<"Fraction 2 numerator = "<< f2.getNumerator()<<endl;
    cout<<"Fraction 2 denominator = "<< f2.getDenominator()<<endl;
    return 0;
}
