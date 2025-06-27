#pragma once

// Write your solution here

template <class T>
class Holder{
    private:
        T single_value = 0;
    public:
        Holder()=default;

        Holder(T a): single_value(a){};

        T getValue(){
            return single_value;
        }

        void setValue(const T& a){
            single_value = a;
        }
};