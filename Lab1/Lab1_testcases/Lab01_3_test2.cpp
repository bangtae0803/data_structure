//
//  Lab01-3.cpp
//  Lab01
//
//  Modified by Jeman Park on 2023/09/18.
//

#include <iostream>
#include "SquareMatrix.h"
using namespace std;

int main() {
    SquareMatrix A;
    SquareMatrix B;
    SquareMatrix C;
    SquareMatrix D;
    
    for (int i = 0; i < MATRIX_SIZE; i++){
        for (int j = 0; j < MATRIX_SIZE; j++){
            A.StoreValue(i, j, 2);
        }
    }
    
    for (int i = 0; i < MATRIX_SIZE; i++){
        for (int j = 0; j < MATRIX_SIZE; j++){
            B.StoreValue(i, j, 1);
        }
    }

    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            C.StoreValue(i, j, -1);
        }
    }
    
       
    cout << "A add C: " << endl;
    D = A.Add(C);
    D.printMatrix();
    // Correct Output:
    //    ---- n ----
    //  | 1 1 .... 1 1
    //  | 1 1 .... 1 1
    //  n ... .... ...
    //  | 1 1 .... 1 1
    //  | 1 1 .... 1 1
    
    cout << "D subtract C: " << endl;
    D = D.Subtract(C);
    D.printMatrix();
    // Correct Output:
    //    ---- n ----
    //  | 2 2 .... 2 2
    //  | 2 2 .... 2 2
    //  n ... .... ...
    //  | 2 2 .... 2 2
    //  | 2 2 .... 2 2
    
    cout << "copy C into A: " << endl;
    A.Copy(C);
    A.printMatrix();
    // Correct Output:
    //    ---- n ----
    //  | -1 -1 .... -1 -1
    //  | -1 -1 .... -1 -1
    //  n   ... .... ...
    //  | -1 -1 .... -1 -1
    //  | -1 -1 .... -1 -1
    
    
    return 0;
}
