#include <iostream>
#include "Queue.h"
using namespace std;
int main() {
    Queue<int> q;
    cout<<"Enter numbers for a 5 length queue. press -1 to stop"<<endl;
    while (!q.IsFull()){
        int i = 0;
        cin>> i;
        if(i==-1){
            break;
        }
        q.EnQueue(i);
    }
//    while(!q.IsEmpty()){
//        cout<< q.GetFront() << " ";
//       q.DeQueue();
//    }
    cout<<endl;
    if(q.IsPalindrome()){
        cout<<"Entered integer number is a palindrome"<<endl;
    }else{
        cout<<"Sorry the number is not a palindrome :( "<<endl;
    }
    return 0;
}
