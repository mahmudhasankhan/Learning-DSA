#ifndef SORTEDLIST_H
#define SORTEDLIST_H
#include <iostream>

const int MAX_ITEMS =5;

class SortedList{
private:

    StudentInfo info [MAX_ITEMS];
    int length;
    int currentPos;

public:
    SortedList();
    bool InsertItem(StudentInfo);
    bool RetrieveItem(StudentInfo&);
    bool DeleteItem(StudentInfo);
    bool GetNextItem(StudentInfo&);
    void ResetList();
    bool IsFull();
    int GetLength();
    void MakeEmpty();

};

#include "SortStudent.hpp"
#endif