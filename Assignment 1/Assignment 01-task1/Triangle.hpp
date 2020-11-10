#include <math.h>
#include "Triangle.h"

Triangle ::Triangle(double side1, double side2, double side3) {
    this->side1=side1;
    this->side2=side2;
    this->side3=side3;
}

Triangle:: Triangle(){
    side1=0;
    side2=0;
    side3=0;
}
double Triangle :: getSide1(){
    return side1;
}
double Triangle::setSide1(double side1) {
     this->side1 = side1;
}
double Triangle::getSide2() {
    return side2;
}
double Triangle::setSIde2(double side2) {
    return this->side2 = side2;
}
double Triangle::getSide3() {
    return side3;
}
double Triangle::setSide3(double side3) {
    return this->side3=side3;
}
double Triangle::getPerimeter() {
    return side1+side2+side3;
}
double Triangle::getArea() {
    double p = (side1+side2+side3)/2 ;
    double result;
    result = sqrt(p*(p-side1)*(p-side2)*(p-side3));
    return result;
}
