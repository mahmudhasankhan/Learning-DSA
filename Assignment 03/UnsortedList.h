#ifndef UNSORTEDLIST_H
#define UNSORTEDLIST_H

const int MAX_ITEMS = 6;

template<class ItemType>
class UnsortedList{
private:
    ItemType info[MAX_ITEMS];
    int length;
    int currentPos;
public:
    UnsortedList();
    bool InsertItem(ItemType);
    bool RetrieveItem(ItemType&);
    bool DeleteItem(ItemType);
    bool GetNextItem(ItemType&);
    void ResetList();
    bool IsFull();
    int GetLength();
    void MakeEmpty();


};

#include "UnsortedList.hpp"
#endif