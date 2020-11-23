using namespace std;

Matrix::Matrix(int numberofRows, int numberofColumns) {
    this->numberofRows=numberofRows;
    this->numberofColumns=numberofColumns;

    matrix = new int* [numberofRows];
    for (int i = 0; i <numberofRows ; ++i) {
        matrix[i]= new int [numberofColumns];
    }
}
Matrix:: ~Matrix() {
    for (int i = 0; i < numberofRows ; ++i) {
        delete [] matrix[i];

    }
    delete [] matrix;
}
int Matrix::getRows() {
    return numberofRows;
}
int Matrix::getColumns() {
    return numberofColumns;
}
void Matrix::setValue(int row, int col, int value) {
    matrix[row][col]=value;
}
int Matrix::getValue(int row, int col) {
    return matrix[row][col];
}
Matrix& Matrix::operator+(Matrix &m) {
    if((numberofRows!= m.numberofRows) || (numberofColumns!=m.numberofColumns)){
         cout<<"Size does not match" << endl;
          Matrix* result = new Matrix (1,1);
        return *result;
    }
    Matrix* result = new Matrix(numberofRows, numberofColumns);
    for (int i = 0; i <numberofRows ; ++i) {
        for (int j = 0; j <numberofColumns ; ++j) {
           result->setValue(i,j, getValue(i, j)+m.getValue(i, j));
        }
    }
    return *result;
}
Matrix& Matrix::operator*(Matrix &m) {
    if (numberofColumns != m.numberofRows) {
        cout << "Invalid size, Cannot Multiply !" << endl;
        Matrix *result = new Matrix(1, 1);          // Returns a 1  by 1 matrix
        return *result;
    }
    Matrix* result = new Matrix(numberofRows,m.numberofColumns); // dynamically creates a new matrix object by using  *result
    for (int i = 0; i <numberofRows ; i++) {                     //*result holds a precise size (first matrix rows by second matrix columns) to store values.
        for (int j = 0; j <m.numberofColumns ; j++) {
            result->setValue(i,j, 0);                                  // sets up a matrix which will contain default zero values;
                for (int k = 0; k <m.numberofRows; k++) {                   // k<m.numberofRows || k<numberofColumns, both will work because both contain the same value
                    result->matrix[i][j]  +=  matrix[i][k]*m.matrix[k][j];  // iterates and multiplies each row by each column and store them inside the result matrix and again do the same and add.
            }
        }
    }
    return *result;         // As we are passing by reference and not passing any value like address, we must return a reference which is a Matrix type
}                           // and *result holds a Matrix Object
