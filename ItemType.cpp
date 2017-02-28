//
// Created by Pablo on 2/27/2017.
//

#include "ItemType.h"
#include <iostream>
template <typename T>
RelationType ItemType<T>::ComparedTo(ItemType otherItem) const {

}
template <typename T>
ItemType<T>::ItemType(T value) {
    this->value = value;
}


template <typename T>
void ItemType<T>::Print() const {
    using namespace std;
    cout << value << endl;
}


template <typename T>
void ItemType<T>::Initialize(T number) {
    this->value = number;
}

