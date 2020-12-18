#include <iostream>
#include "StudentInfo.h"
#include "SortStudent.h"
using namespace std;

int main() {

    StudentInfo s1("Nasim", 182, 2.35);
    StudentInfo s2("Kader",181,3.05);
    StudentInfo s3("Masum", 171,3.55);

    if(s1<s2){
        cout<< "Kader has a better cgpa than Nasim"<<endl;
    }
    if(s1>s2){
        cout<< "Nasim has a better cgpa than Kader"<<endl;
    }
    if(s1<=s2){
        cout<< "Nasim's cgpa is less  than or equal than kader's cgpa"<<endl;
    }
    if(s1>=s2){
        cout<<"Nasim's cgpa is greater than or equal than Kader's cgpa "<<endl;
    }
    if(s1==s2){
        cout<<"Both have same cgpa"<<endl;
    }
    if(s1!=s2){
        cout<<"Both of them have different cgpa"<<endl;
    }
    /** Bonus task: */

    SortedList list;
    list.InsertItem(s1);
    list.InsertItem(s2);
    list.InsertItem(s3);
    cout<<endl;
    cout<<"Printing the list of students : "<< endl;
    StudentInfo s;
    list.ResetList();
    while (list.GetNextItem(s)){
        cout<<s<<endl;
    }

    return 0;
}
