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
    
    /* Feel free to edit codes below (test with various cases) */
    uList.PrintList();
    // Correct Outputs:
    // [EMPTY LIST]
    
    int cnt = uList.removeItemsEndingWith(4);
    cout << "[Removed]:" << cnt << endl;
    uList.PrintList();
    // Correct Outputs:
    // [Removed]:0
    // [EMPTY LIST]
    
    cnt = uList.removeItemsEndingWith(3);
    cout << "[Removed]:" << cnt << endl;
    uList.PrintList();
    // Correct Outputs:
    // [Removed]:0
    // [EMPTY LIST]
    
    return 0;
}
