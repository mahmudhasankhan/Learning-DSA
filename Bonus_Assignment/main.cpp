#include <iostream>
#include "Matrix.h"

using namespace std;
int main() {
//    cout << "Hello, World!" <<endl;

Matrix m1 (2,3), m2(3,3); //creating two matrices

    //Setting up values for Matrix A
    for (int i = 0; i <m1.getRows() ; ++i) {
        for (int j = 0; j <m1.getColumns() ; ++j) {
            m1.setValue(i, j, i+j);

        }
    }
    //Setting up values for Matrix B
    for (int i = 0; i <m2.getRows() ; ++i) {
        for (int j = 0; j <m2.getColumns() ; ++j) {
            m2.setValue(i,j, i+j);
        }
    }

    //Printing values of Matrix A
    cout<<"Matrix A : "<< endl;
    for (int i = 0; i <m1.getRows() ; ++i) {
        for (int j = 0; j <m1.getColumns() ; ++j) {
            cout << m1.getValue(i, j) << " ";
        }
        cout<< endl;

    }
    //Printing values of Matrix B
    cout<<"Matrix B : "<< endl;
    for (int i = 0; i <m2.getRows() ; ++i) {
        for (int j = 0; j <m2.getColumns() ; ++j) {
            cout << m2.getValue(i, j) << " ";
        }
        cout<< endl;

    }
    //Multiplying two matrices
    Matrix result1 = m1*m2;
    //Printing The Result:
    cout<<"Multiplication of Matrix A and Matrix B " << endl;
    for (int i = 0; i <result1.getRows() ; ++i) {
        for (int j = 0; j <result1.getColumns() ; ++j) {
            cout << result1.getValue(i, j) << " ";
        }
        cout<< endl;

    }

    return 0;
}
