#include "UnsortedList.h"
using namespace std;
template<class ItemType>
UnsortedList<ItemType>::UnsortedList() {
    length = 0;
    currentPos=-1;
}
template<class ItemType>
bool UnsortedList<ItemType> ::InsertItem(ItemType item) {

    if(IsFull()){
        return false;
    }

    for (int i = 0; i < length ; ++i) {      /** modified code section */
        if (item == info[i]){
            cout<<item <<" is duplicate, please insert unique value! " << endl;
            return false;
        }
    }

    info[length]=item;
    length++;

    return true;

}
template<class ItemType>
bool UnsortedList<ItemType> ::RetrieveItem(ItemType &item) {
    int location =0;
    while (location<length){
        if(info[location] == item){
            item = info[location];
            return true;
        }
        location++;
    }
    return false;
}
template<class ItemType>
bool UnsortedList<ItemType>::DeleteItem(ItemType item) {
    int location =0;
    while (location<length){
        if(info[location] == item){
            break;
        }
        location++;
    }
    if(location == length){
        return false;
    }
    info[location]=info[length-1];
    length--;
    return true;

}
template<class ItemType>
bool UnsortedList<ItemType>::GetNextItem(ItemType &item) {
    if(currentPos>=length-1){
        return false;
    }
    currentPos++;
    item = info[currentPos];
    return true;

}
template<class ItemType>
void UnsortedList<ItemType>::ResetList() {
    currentPos = -1;
}
template<class ItemType>
bool UnsortedList<ItemType>::IsFull() {
    return(length==MAX_ITEMS);
}
template<class ItemType>
int UnsortedList<ItemType>::GetLength() {
    return length;
}
template<class ItemType>
void UnsortedList<ItemType>::MakeEmpty() {
    length=0;
    currentPos=-1;
}





