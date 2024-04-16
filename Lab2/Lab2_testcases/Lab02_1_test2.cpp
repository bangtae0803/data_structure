//
//  Lab02_1.cpp
//  Lab02
//
//  Modified by Jeman Park on 2023/03/19.
//

#include <iostream>
#include "UnsortedType.h"

using namespace std;

int main() {
    UnsortedType uList;
    
    uList.appendItem(10);
    uList.appendItem(2);
    uList.appendItem(30);
    uList.appendItem(5);
    uList.appendItem(20);
    uList.appendItem(100);
    uList.appendItem(53);
    uList.appendItem(12);
    uList.appendItem(2);
    uList.PrintList();
    // Correct Outputs:
    // [4 3 14 12 11 7 24 6 1 ]
    
    int cnt = uList.removeItemsEndingWith(0);
    cout << "[Removed]:" << cnt << endl;
    uList.PrintList();
    // Correct Outputs:
    // [Removed]: 4
    // [2 2 12 5 53 ]  --> Any order is okay
    
    
    return 0;
}
