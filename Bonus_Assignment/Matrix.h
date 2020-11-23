#ifndef MATRIX_H
#define MATRIX_H

class Matrix{
private:
    int** matrix;       //CLASS PROPERTIES
    int numberofRows;
    int numberofColumns;
public:
    Matrix(int numberofRows=1 , int numberofColumns=1); //Works both as a parameterized or a default constructor
    ~Matrix();                                         //Destructor for deallocation
    int getRows();                                     //Getters
    int getColumns();

    void setValue(int, int, int);                      //Setting Values of Matrix
    int getValue(int, int);                            //Getting values from a Matrix

    Matrix& operator+(Matrix&);                        //Overloads + operator for Matrix Addition
    Matrix& operator*(Matrix&);                        //Overloads * operator for Matrix Multiplication




};
#include "Matrix.hpp"
#endif