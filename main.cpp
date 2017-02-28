//
// Created by Pablo on 2/27/2017.
//
#include "UnsortedList.h"
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    UnsortedType<ItemType<string> > unsortedType;
    ifstream dataText;
    string val;
    dataText.open("data2.txt");
    while (dataText >> val)
        unsortedType.InsertItem(ItemType<string>(val));
    unsortedType.InsertItem(ItemType<string>("cat"));
    unsortedType.InsertItem(ItemType<string>("antibacterial"));
    unsortedType.InsertItem(ItemType<string>("letter"));

    return 0;
}
