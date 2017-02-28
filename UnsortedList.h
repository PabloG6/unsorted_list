//
// Created by Pablo on 2/27/2017.
//

#ifndef CSCI_2_LINKEDLIST_H
#include "ItemType.h"
#include <string>
using namespace std;
template <typename T>
class UnsortedType {
private:
    int length;
    int max;

    int currentPos;
    ItemType<T> info[0];
public:
    UnsortedType();
    UnsortedType(int MAX);
    void MakeEmpty();
    bool IsFull() const;
    int GetLength() const;
    void RetrieveItem(ItemType<T>& item, bool& found);
    void DeleteItem(ItemType<T> item);
    void InsertItem(ItemType<T> item);
    void ResetList();
    void GetNextItem(ItemType<T>& item);
    bool IsEmpty();

};
//
// Created by Pablo on 2/27/2017.
//

template <typename T>
UnsortedType<T>::UnsortedType() {
    length = 0;
};
template <typename T>
UnsortedType<T>::UnsortedType(int MAX) {
    this->max = MAX;

    ItemType<T> info[MAX];
    this->info = info;

}
template <typename T>
void UnsortedType<T>::MakeEmpty() {

}
template <typename T>
bool UnsortedType<T>::IsFull() const {
    return (length == this->max);
}

template <typename T>
void UnsortedType<T>::RetrieveItem(ItemType<T> &item, bool &found) {
    bool moreToSearch;
    int location = 0;
    found = false;
    moreToSearch = location < length;
    while (moreToSearch && !found) {
        switch (item.compare(info[location])) {
            case LESS:
                break;
            case GREATER:
                location++;
                moreToSearch = (location < length);
                break;
            case EQUAL :
                found = true;
                item = info[location];
                break;
        }
    }
}
template <typename T>
void UnsortedType<T>::InsertItem(ItemType<T> item) {
    info[length] = item;
    length++;
}

template <typename T>
void UnsortedType<T>::DeleteItem(ItemType<T> item) {
    int location = 0;
    while (item.ComparedTo(info[location]) != EQUAL) {
        location++;
        location[info] = info[length - 1];
        length--;
    }
}

template <typename T>
void UnsortedType<T>::ResetList() {
    currentPos = -1;
}
template <typename T>
void UnsortedType<T>::GetNextItem(ItemType<T> &item) {
    currentPos++;
    item = info[currentPos];
}
template <typename T>
bool UnsortedType<T>::IsEmpty() {
    return (length == 0);
}

#endif //CSCI_2_LINKEDLIST_H
