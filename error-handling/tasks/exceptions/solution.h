#pragma once
#include <cmath>
#include <iostream>
#include <stdexcept>

// Write your solution here
double computeSquareRoot(double num){
    if(num<0){
        throw std::domain_error("Negative input not allowed");
    }
    return sqrt(num);
}