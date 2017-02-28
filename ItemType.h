//
// Created by Pablo on 2/27/2017.
//

#ifndef CSCI_2_ITEMTYPE_H
#define ITEMTYPE
enum RelationType{LESS, EQUAL, GREATER};
template <typename T>
class ItemType {
public:
    ItemType(T value);
    ItemType();
    RelationType ComparedTo(ItemType item) const;
    void Print() const;
    void Initialize(T number);
private:
    T value;

};

//
// Created by Pablo on 2/27/2017.
//

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


#endif //CSCI_2_ITEMTYPE_H
