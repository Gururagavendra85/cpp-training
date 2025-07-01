#pragma once
#include <iostream>

int factorial(int number) {
    if(std::cin.fail() || number<0){
        return -1; 
    }else if(number==1 || number ==0){
        return 1;
    }
    else{
        return number * factorial(number-1);
    }   
}
