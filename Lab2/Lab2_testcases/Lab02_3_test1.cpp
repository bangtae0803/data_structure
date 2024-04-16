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

    s_list1.PrintList();
    s_list2.PrintList();
    s_list3 = MergeList(s_list1, s_list2);
    
    s_list3.PrintList();
    // Correct Output:
    //    [EMPTY LIST]
    //    [EMPTY LIST]
    //    [EMPTY LIST]
    
    
    return 0;
}
