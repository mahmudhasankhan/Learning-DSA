#ifndef TRIANGLE_H
#define TRIANGLE_H
class Triangle{
private:
    double side1;
    double side2;
    double side3;
public:
    Triangle(double side1, double side2, double side3);
    Triangle();

    double getSide1();
    double setSide1(double side1);
    double getSide2();
    double setSIde2(double side2);
    double getSide3();
    double setSide3(double side3);


    double getPerimeter();
    double getArea();
};
#include "Triangle.hpp"
#endif