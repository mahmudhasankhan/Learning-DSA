#ifndef QUEUE_H
#define QUEUE_H

const int MAX_ITEM = 5;

class EmptyQueue{};
class FullQueue{};

template <class Itemtype>
class Queue{
private:
    Itemtype data[MAX_ITEM];
    int front;
    int rear;
public:
    Queue();
    void EnQueue(Itemtype);
    void DeQueue();
    Itemtype GetFront();
    bool IsEmpty();
    bool IsFull();
    bool IsPalindrome();


};

#include "Queue.hpp"
#endif