#pragma once
#include <iostream>
#include <stdexcept>

// Simple vector implementation for integers
class IntVector {
private:
    int* data;       // Pointer to the dynamic array
    size_t capacity; // The allocated size of the array
    size_t count;    // The number of elements currently in the array


    void resize(size_t new_capacity){
        int* newarr= new int[new_capacity]{};

        for(int i=0;i<count;i++){
                newarr[i]=data[i];
        }

        delete[] data;
        data = newarr;
        capacity = new_capacity;
    
    }
public:
    // Default constructor
    IntVector() : data(new int[0]), capacity(0), count(0) {}
    
    IntVector(size_t size) : data(new int[size]), capacity(size), count(0) {}

    void push_back(int value) {
        if (count >= capacity) {
            size_t new_capacity = capacity == 0 ? 1 : capacity * 2;
            resize(new_capacity);
        }
        
        data[count] = value;
        ++count;
    }

    int at(size_t index) {
        if (index >= count) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    size_t size() const {
        return count;
    }

    ~IntVector() {
        delete[] data;
    }
};