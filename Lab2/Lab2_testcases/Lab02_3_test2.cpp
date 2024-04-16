//
//  Lab02_3.cpp
//  Lab02
//
//  Modified by Jeman Park on 2023/03/19.
//

#include <iostream>
#include "SortedType.h"
#include "MergeList.h"

using namespace std;


int main() {
    
    SortedType s_list1, s_list2, s_list3;

    /* Feel free to edit codes below (test with more cases) */
    s_list1.insertItem(3);
    s_list1.insertItem(6);
    s_list1.insertItem(3);
    s_list1.insertItem(4);
    s_list1.insertItem(5);
    s_list1.insertItem(4);
    s_list1.insertItem(12);
    s_list1.PrintList();
    // Correct Output:
    //    [3 3 4 4 5 6 12 ]
    
    s_list2.insertItem(6);
    s_list2.insertItem(5);
    s_list2.insertItem(13);
    s_list2.insertItem(3);
    s_list2.insertItem(4);
    s_list2.PrintList();
    // Correct Output:
    //    [3 4 5 6 13 ]
    
    s_list3 = MergeList(s_list1, s_list2);
    s_list3.PrintList();
  
    // Correct Output:
    //    [3 3 3 4 4 4 5 5 6 6 12 13 ]
    
    
    return 0;
}
