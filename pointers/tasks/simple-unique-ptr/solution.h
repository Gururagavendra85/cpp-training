#pragma once
#include<iostream>
// Your solution here
struct Test {
    int value;
    Test(int v) : value(v) {}
    void show() { std::cout << "Value: " << value << std::endl; }
};

template <typename T>
class SimpleUniquePtr {
    private:
    T* _ptr = nullptr;

    public:
    SimpleUniquePtr(T* ptr = nullptr):_ptr(ptr){};

    // copy constructor and copy assignment should be disabled
    SimpleUniquePtr(SimpleUniquePtr& t) = delete;
    SimpleUniquePtr& operator=(SimpleUniquePtr& t) = delete;

    // move cons. and move ass is possible
    SimpleUniquePtr(SimpleUniquePtr&& t){
        _ptr = t._ptr;
        t._ptr = nullptr;
    }

    SimpleUniquePtr& operator=(SimpleUniquePtr&& t){
        if(this!=&t){
            delete _ptr;
            _ptr = t._ptr;
            t._ptr = nullptr;
        }
        return *this;
    }

    // operator overloading for derefernce operators for pointers * and -> 
    T* operator->(){
        return _ptr;
    }

    T& operator*(){
        return *_ptr;
    }


    T* get(){
        return _ptr;
    }

    //destructor
    ~SimpleUniquePtr(){
        delete _ptr;
    }

};


template<>
class SimpleUniquePtr<Test>{
    private:
    Test* _ptr = nullptr;

    public:
    SimpleUniquePtr(Test* ptr = nullptr):_ptr(ptr){};

    // copy constructor and copy assignment should be disabled
    SimpleUniquePtr(SimpleUniquePtr& t) = delete;
    SimpleUniquePtr& operator=(SimpleUniquePtr& t) = delete;

    // move cons. and move ass is possible
    SimpleUniquePtr(SimpleUniquePtr&& t){
        _ptr = t._ptr;
        t._ptr = nullptr;
    }

    SimpleUniquePtr& operator=(SimpleUniquePtr&& t){
        if(this!=&t){
            delete _ptr;
            _ptr = t._ptr;
            t._ptr = nullptr;
        }

        return *this;
    }

    // operator overloading for derefernce operators for pointers * and -> 
    Test* operator->(){
        return _ptr;
    }

    Test& operator*(){
        return *_ptr;
    }

    //destructor
    ~SimpleUniquePtr(){
        delete _ptr;
    }

};