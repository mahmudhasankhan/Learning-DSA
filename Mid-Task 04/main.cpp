#include <iostream>
using namespace std;
int main() {
//    std::cout << "Hello, World!" << std::endl;
    int n=0;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int **arr = new int* [n];
    for (int i = 0; i <n ; ++i) {
        cout<<"Enter integer ";
        int *j= new int ;
        cin >> *j;
        arr[i]= j;

    }
    cout<<"Printing integers -> "<<endl;
    for (int i = 0; i <n ; ++i) {
        cout<< *arr[i] << " ";
    }
    /** deallocating */
    for (int i = 0; i <n ; ++i) {
        delete [] arr [i];
    }
    delete [] arr;
    return 0;
}
