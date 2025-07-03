#pragma once

// Write your solution here
struct AccessCounter {
    int count = 0;
};

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

// Template specialization for Holder<AccessCounter>
template <>
class Holder<AccessCounter> {
private:
    AccessCounter single_value;
public:
    Holder() = default;

    Holder(AccessCounter a) : single_value(a) {}

    AccessCounter getValue() {
        single_value.count++;
        return single_value;
    }

    void setValue(const AccessCounter& a) {
        single_value = a;
    }
};