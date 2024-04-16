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

    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            A.StoreValue(i, j, i + j);
        }
    }

    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            B.StoreValue(i, j, 1);
        }
    }

    cout << "A: " << endl;
    A.printMatrix();
    // Correct Output:
    //     ---- n ----
    //   | 0  1 ....  8  9
    //   | 1  2 ....  9 10
    //   n ...............
    //   | 8  9 .... 16 17
    //   | 9 10 .... 17 18

    cout << "B: " << endl;
    B.printMatrix();
    // Correct Output:
    //    ---- n ----
    //  | 1 1 .... 1 1
    //  | 1 1 .... 1 1
    //  n ... .... ...
    //  | 1 1 .... 1 1
    //  | 1 1 .... 1 1


    cout << "empty A: " << endl;
    A.MakeEmpty();
    A.printMatrix();
    // Correct Output:
    //    ---- n ----
    //  | 0 0 .... 0 0
    //  | 0 0 .... 0 0
    //  n ... .... ...
    //  | 0 0 .... 0 0
    //  | 0 0 .... 0 0


    cout << "empty B: " << endl;
    B.MakeEmpty();
    B.printMatrix();
    // Correct Output:
    //    ---- n ----
    //  | 0 0 .... 0 0
    //  | 0 0 .... 0 0
    //  n ... .... ...
    //  | 0 0 .... 0 0
    //  | 0 0 .... 0 0

    return 0;
}
