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

    sList.insertItem(2);
    sList.insertItem(6);
    sList.insertItem(10);
    sList.insertItem(4);
    sList.insertItem(8);
    sList.insertItem(12);
    sList.insertItem(16);
    sList.insertItem(14);

    sList.PrintList();
    // Correct Output: [2 4 6 8 10 12 14 16 ]
   
    cout << "[BinarySearch]: the result of input '6' is " << sList.BinarySearch(6) << endl;
    cout << "[BinarySearch]: the result of input '15' is " << sList.BinarySearch(15) << endl;
    cout << "[BinarySearch]: the result of input '12' is " << sList.BinarySearch(12) << endl;
    cout << "[BinarySearch]: the result of input '17' is " << sList.BinarySearch(17) << endl;
    cout << "[BinarySearch]: the result of input '18' is " << sList.BinarySearch(18) << endl;
    cout << "[BinarySearch]: the result of input '16' is " << sList.BinarySearch(16) << endl;
    // Correct Output:
    //    [BinarySearch]: the result of input '6' is 2
    //    [BinarySearch]: the result of input '15' is -1
    //    [BinarySearch]: the result of input '12' is 5
    //    [BinarySearch]: the result of input '17' is -1
    //    [BinarySearch]: the result of input '18' is -1
    //    [BinarySearch]: the result of input '16' is 7


    return 0;
}
