#include "solution.h"
#include <iostream>

int main() {
    double num=25;
    double result=0;
    try{
        result = computeSquareRoot(num);
        std::cout<<"square root of num is: "<<result<<"\n";
    }
    catch(std::domain_error& ex){
        std::cout << ex.what() << "\n";
        std::exit(EXIT_FAILURE);
    }
    catch(...){//for any other execption
        std::cout<<"Unknown Error\n";
        std::exit(EXIT_FAILURE);
    }
    return 0;
}

