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


#endif //CSCI_2_LINKEDLIST_H
