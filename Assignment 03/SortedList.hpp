#include "SortedList.h"


template<class ItemType>
SortedList<ItemType>::SortedList() {
    length = 0;
    currentPos=-1;
    info = new int [MAX_ITEMS];
}
template<class ItemType>
SortedList<ItemType>::~SortedList<ItemType>() {
    delete [] info;
    cout<<endl;
    cout<<"destructor called -> object deleted"<< endl;  // deletes the array dynamically created
}
template<class ItemType>
bool SortedList<ItemType> ::InsertItem(ItemType item) {

    if(IsFull()){
        return false;
    }
    for (int i = 0; i <length ; ++i) {  /** modified code section */
        if(item == info[i]){
            cout<< item <<" is duplicate, please insert unique! "<< endl;
            return false;
        }
    }
    int location =0;
    while (location<length){
        if(info[location]<=item){
            location++;
        } else{
            break;
        }
    }
    for (int index = length; index > location  ; index--) {
        info[index]=info[index-1];
    }
    info[location]=item;
    length++;
    return true;

}
template<class ItemType>
bool SortedList<ItemType> ::RetrieveItem(ItemType &item) {
   int first = 0, last = 7, midpoint;
   while (first<=last){
       midpoint = (first+last)/2;
       if(item < info[midpoint]){
           last = midpoint -1;
       }
       else if(item>info[midpoint]){
           first = midpoint+1;
       }
       else{
           item= info[midpoint];
           return true;
       }
   }
    return false;
}
template<class ItemType>
bool SortedList<ItemType>::DeleteItem(ItemType item) {

    /* int location =0;             // for normal search
    while (location<length){
        if(info[location] == item){
            break;
        }
        location++;
    }
    if(location == length){
        return false;
    }
    for (int index = location; index < length-1 ; index++) {
        info[index]=info[index+1];
    }
    length--;
    */
    // for binary search
   bool found = false;
    int first = 0, last = 7, midpoint;
    while (first<=last){
        midpoint = (first+last)/2;
        if(item < info[midpoint]){
            last = midpoint -1;
        }
        else if(item>info[midpoint]){
            first = midpoint+1;
        }
        else{
            found = true;
            break;
        }
    }
    if(!found){
        return false;
    }
    for (int i = midpoint; i <length-1 ; ++i) {
            info[i]=info[i+1];
    }
    length--;
    return true;

}
template<class ItemType>
bool SortedList<ItemType>::GetNextItem(ItemType &item) {
    if(currentPos>=length-1){
        return false;
    }
    currentPos++;
    item = info[currentPos];
    return true;

}
template<class ItemType>
void SortedList<ItemType>::ResetList() {
    currentPos = -1;
}
template<class ItemType>
bool SortedList<ItemType>::IsFull() {
    return(length==MAX_ITEMS);
}
template<class ItemType>
int SortedList<ItemType>::GetLength() {
    return length;
}
 template<class ItemType>
void SortedList<ItemType>::MakeEmpty() {
    length=0;
    currentPos=-1;
}
