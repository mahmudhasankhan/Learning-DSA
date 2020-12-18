#include <iostream>
#include "UnsortedList.h"

using namespace std;
int main() {
    UnsortedList<int> list1;
    cout<<"Insert Values for unsorted list1 , press -1 to stop inserting -> " <<endl;
    int input=0;
    int out;
    while (true){
        cin >> input;
        if(input == -1)
            break;
        list1.InsertItem(input);
    }
    cout<<"Printing unsorted List 1 : "<<endl;
    while(list1.GetNextItem(out)){
        cout << out << " ";
    }
    cout<<endl;
    UnsortedList<int> list2;
    cout<<"Insert values for unsorted list 2, press -1 to stop inserting "<<endl;
    while (!list2.IsFull()){
        int input = 0;
        cin >> input;
        if(input ==-1)
            break;
        list2.InsertItem(input);
    }
    cout<<"Printing unsorted List 1 : "<<endl;

    while(list2.GetNextItem(out)){
        cout << out << " ";
    }
    cout<<endl;

 UnsortedList <int> result = list1 + list2 ;
 result.ResetList();
    cout<<"After addition of list 1 and list 2 "<<endl;
    while (result.GetNextItem(out)){
        cout << out << " ";
    }




    return 0;

}
