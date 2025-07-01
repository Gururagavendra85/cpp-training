#pragma once
#include <iostream>

// Write your solution here
int* createArray(size_t size, int initialValue){
    if(size<1){
        int* arr = nullptr;
        return arr; 
    }
    int* arr = new int[size];
    for(int i=0;i<size;i++){
        arr[i]=initialValue;
    }
    return arr;
}

int* copyArray(const int* source, size_t size){
    if(size<1){
        int* arr = nullptr;
        return arr; 
    }
    int* arr = new int[size];
    for (size_t i = 0; i < size; ++i) {
        arr[i] = source[i];
    }
    return arr;
}


//[1,2,3,4,5]
//[5,4,3,2,1]
void reverseArray(int* array, size_t size){
    int i=0;
    int n = size -1;
    int temp = 0;
    while (i!=n)
    {
        temp = array[n];
        array[n] = array[i];
        array[i] = temp;
        n = n-1;
        i = i+1;
    } 
    
}

void deleteArray(int* array){
    delete[] array;
}
