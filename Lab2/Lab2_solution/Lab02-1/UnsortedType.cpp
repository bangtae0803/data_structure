//
//  UnsortedType.cpp
//  Lab02
//
//  Modified by Jeman Park on 2023/03/19.
//

#include<iostream>
#include "UnsortedType.h"

using namespace std;

UnsortedType::UnsortedType()
{
    // Constructor of UnsortedType
    length = 0;
}


int UnsortedType::size()
{
    return length;
}

bool UnsortedType::isFull()
{
    return (length == MAX_ITEMS);
}

bool UnsortedType::isEmpty()
{
    return (length == 0);
}

void UnsortedType::appendItem(ItemType value){
    if (isFull( )){
        cout << "[ERROR] List is FULL" << endl;
        return;
    }
    
    data[length] = value;
    length ++;
}


void UnsortedType::insertItem(int pos, ItemType value){
    if (isFull( )){
        cout << "[ERROR] List is FULL" << endl;
        return;
    }
    
    if (pos > length){
        cout << "[ERROR] Invalid Position (pos > length)" << endl;
        return;
    }

    data[length] = data[pos];
    data[pos] = value;
    length ++;
}

void UnsortedType::removeItem(ItemType value){
    if (isEmpty( )){
        cout << "[ERROR] List is EMPTY" << endl;
        return;
    }
    for ( int i = 0; i < length; i++ ){
        if (data[i] == value){
            data[i] = data[length-1];
            length--;
            break;
        }
    }
}

int UnsortedType::removeItemsEndingWith(int endDigit){
    
    int ret = 0;

    /* Implement the function here (Lab 02-1) */
    // This functions removes items ending with "endDigit"
    // For example, suppose that test_list = [ 13, 7, 2, 3, 10, 11, 23, 30, 43]
    // removeItemsEndingWith(3) will remove all items that have the last digit of 3
    // After removeItemsEndingWith(3), test_list will be [7, 2, 10, 11, 30]    
    // (13, 3, 23, 43 are removed)
    // The function returns the number of items removed (The above example will return 4)
    
    for (int i = 0; i < length; i++) {
        int tmp = data[i] % 10;

        if (tmp == endDigit) {
            data[i] = data[length - 1];
            length--;
            ret++;
        }
    }

    return ret;
}


void UnsortedType::updateItem(int pos, ItemType new_value){
    if (pos >= length){
        cout << "[ERROR] Invalid Position (pos >= length)" << endl;
        return;
    }
    
    data[pos] = new_value;
}

void UnsortedType::clear( ){
    length = 0;
}

ItemType UnsortedType::getItem(int pos){
    if (pos >= length){
        cout << "[ERROR] Invalid Position (pos >= length)" << endl;
        return -1;
    }
    
    return data[pos];
}


bool UnsortedType::findItem(ItemType & item){
    int location = 0;
    
    while(location < length){
        if(data[location] == item){
            item = data[location];
            return true;
        }
        location ++;
    }
    return false;
}

void UnsortedType::PrintList()
{
    if(length == 0){
        cout << "[EMPTY LIST]" << endl;;
        return;
    }
    cout << "[";
    for(int i=0; i < length; i++){
        cout << data[i] << " ";
    }
    cout << "]" << endl;
}
