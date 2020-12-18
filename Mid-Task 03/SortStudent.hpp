SortedList::SortedList() {
    length = 0;
    currentPos=-1;
    info[MAX_ITEMS];
}

bool SortedList::InsertItem(StudentInfo item) {

    if(IsFull()){
        return false;
    }
    /** if we need to remove any duplicates */
//    for (int i = 0; i <length ; ++i) {
//        if(item == info[i]){
//            cout << item <<" is duplicate, please insert unique! "<< endl;
//            return false;
//        }
//    }
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

bool SortedList::RetrieveItem(StudentInfo &item) {
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

bool SortedList::DeleteItem(StudentInfo item) {

    int location =0;             // for normal search
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

    return true;

}

bool SortedList::GetNextItem(StudentInfo &item) {
    if(currentPos>=length-1){
        return false;
    }
    currentPos++;
    item = info[currentPos];
    return true;

}

void SortedList::ResetList() {
    currentPos = -1;
}

bool SortedList::IsFull() {
    return(length==MAX_ITEMS);
}

int SortedList::GetLength() {
    return length;
}

void SortedList::MakeEmpty() {
    length=0;
    currentPos=-1;
}
