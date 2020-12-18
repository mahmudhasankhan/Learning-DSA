template<class Itemtype>
Queue<Itemtype>::Queue(){
    front = -1;
    rear = -1;
}
template<class Itemtype>
void Queue<Itemtype>::EnQueue(Itemtype item) {
    if(IsFull())
        throw FullQueue();
    if (IsEmpty()){
        data[0]=item;
        front= 0;
        rear=0;
    } else{
        if(rear==MAX_ITEM-1){
            rear=0;
            data[rear]=item;
        }else{
            data[rear+1]=item;
            rear++;
        }

    }

}
template<class Itemtype>
void Queue<Itemtype>::DeQueue() {
    if(IsEmpty()){
        throw EmptyQueue();
    }
    if (front==rear){
        front=-1;
        rear=-1;
    }
    else if(front==MAX_ITEM-1){
        front=0;
    } else {
        front++;
    }
}
template<class Itemtype>
Itemtype Queue<Itemtype>::GetFront() {
    if(IsEmpty()){
        throw EmptyQueue();
    }
    return data[front];
}
template<class Itemtype>
bool Queue<Itemtype>::IsEmpty() {
    return ((front==-1) && (rear==-1));
}
template<class Itemtype>
bool Queue<Itemtype>::IsFull() {
    //return (front == (rear+1)%MAX_ITEM);

    if((front==0)&&(rear==MAX_ITEM-1)){
        return true;
    } else if(rear+1==front){
        return true;
    }else
        return false;
}
template<class Itemtype>
bool Queue<Itemtype>::IsPalindrome() {
    if(data[front]!=data[rear]){
        return false;
    }

    for (int i = 0; i <MAX_ITEM ; ++i) {

        if(data[front]==data[rear]){
            front++;
            rear--;
        }
    }
    return true;

}