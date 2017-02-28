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


#endif //CSCI_2_ITEMTYPE_H
