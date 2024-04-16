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
   
    cout << "[BinarySearchNearest]: the result of input '6' is " << sList.BinarySearchNearest(6) << endl;
    cout << "[BinarySearchNearest]: the result of input '15' is " << sList.BinarySearchNearest(15) << endl;
    cout << "[BinarySearchNearest]: the result of input '12' is " << sList.BinarySearchNearest(12) << endl;
    cout << "[BinarySearchNearest]: the result of input '17' is " << sList.BinarySearchNearest(17) << endl;
    cout << "[BinarySearchNearest]: the result of input '18' is " << sList.BinarySearchNearest(18) << endl;
    cout << "[BinarySearchNearest]: the result of input '16' is " << sList.BinarySearchNearest(16) << endl;
    cout << "[BinarySearchNearest]: the result of input '1' is " << sList.BinarySearchNearest(1) << endl;
    // Correct Output:
//    [BinarySearchNearest]: the result of input '6' is 2
//    [BinarySearchNearest]: the result of input '15' is 6 or (7)
//    [BinarySearchNearest]: the result of input '12' is 5
//    [BinarySearchNearest]: the result of input '17' is 7
//    [BinarySearchNearest]: the result of input '18' is 7
//    [BinarySearchNearest]: the result of input '16' is 7
//    [BinarySearchNearest]: the result of input '1' is 0


    return 0;
}
