#ifndef SORTEDLIST_H
#define SORTEDLIST_H



template<class ItemType>
class SortedList{
private:

    ItemType *info;
    int length;
    int currentPos;

public:
    SortedList();
    ~SortedList();
    bool InsertItem(ItemType);
    bool RetrieveItem(ItemType&);
    bool DeleteItem(ItemType);
    bool GetNextItem(ItemType&);
    void ResetList();
    bool IsFull();
    int GetLength();
    void MakeEmpty();

};

#include "SortedList.hpp"
#endif