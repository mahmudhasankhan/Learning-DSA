#include <iostream>
#include "Triangle.h"
using namespace std;
int main() {
   cout<<"//Creating object 1 using constructor with parameters"<<endl;
    Triangle t1(5,5,5);

   cout<<"side 1 = "<<t1.getSide1()<<endl;
   cout<<"side 2 = "<<t1.getSide2()<<endl;
   cout<<"side 3 = "<<t1.getSide3()<<endl;
   cout<<"Perimeter of Triangle 1 = "<<t1.getPerimeter()<<endl;
   cout<<"Area of Triangle 1 = "<<t1.getArea()<<endl;
   cout<<"//Creating object 2 using default overloaded constructor with not parameters"<<endl;
   Triangle t2;
   cout<<" side 1 = "<<t2.getSide1()<<endl;
   cout<<" side 2 = "<<t2.getSide2()<<endl;
   cout<<" side 3 = "<<t2.getSide3()<<endl;
   cout<<"area of triangle 2 = "<<t2.getArea()<<endl;
    cout<<"perimeter of triangle 2 = "<<t2.getPerimeter()<<endl;
    t2.setSide1(4.5);
    cout<<"side 1 using setters is = "<<t2.getSide1()<<endl;
   //cin.get();
    return 0;
}
