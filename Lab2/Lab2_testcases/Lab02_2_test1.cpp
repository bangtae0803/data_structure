//
//  Lab02_2.cpp
//  Lab02
//
//  Modified by Jeman Park on 2023/03/19.
//

#include <iostream>
#include "SortedType.h"
//#include "mergeList.h"
using namespace std;


int main() {
    
    SortedType sList;

    /* Feel free to edit codes below (test with more cases) */
   
    cout << "[BinarySearch]: the result of input '6' is " << sList.BinarySearch(6) << endl;
    cout << "[BinarySearch]: the result of input '15' is " << sList.BinarySearch(15) << endl;
    cout << "[BinarySearch]: the result of input '0' is " << sList.BinarySearch(0) << endl;
    // Correct Output:
    // [BinarySearch]: the result of input '6' is -1
    // [BinarySearch]: the result of input '15' is -1
    // [BinarySearch]: the result of input '0' is -1

    return 0;
}
