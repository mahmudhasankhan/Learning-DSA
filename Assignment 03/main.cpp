#include <iostream>
#include "UnsortedList.h"
#include "SortedList.h"
using namespace std;
int main() {
    UnsortedList<int> list;
    cout<<"Insert Values for an unsorted list -> " <<endl;
    while (!list.IsFull()){
        int in =0;
        cin >> in;
        list.InsertItem(in);
    }
    cout<<"Printing unsorted List : "<<endl;
         int out =0;
    while(list.GetNextItem(out)){
        cout << out << " ";
        }
    cout<<endl;

    cout<<"Insert values for sorted list -> "<<endl;
    SortedList<int> list1;
    while(!list1.IsFull()){
        int in = 0;
        cin>> in;
        list1.InsertItem(in);
    }
    cout<<"Printing sorted List : "<<endl;
    while(list1.GetNextItem(out)){
        cout << out << " ";
        }

    list.MakeEmpty();
    list1.MakeEmpty();

    return 0;

}
