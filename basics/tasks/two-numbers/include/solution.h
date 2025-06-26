#pragma once
#include <iostream>

void doCalculation(float& x, float& y){
    std::cout<<"Sum: "<<x+y<<"\n";
    std::cout<<"Difference: "<<x-y<<"\n";
    std::cout<<"Product: "<<x*y<<"\n";
    if (y != 0) {
        std::cout << "Quotient: " << x / y << "\n";
    } else {
        std::cout << "Division by zero error!\n";
    }
}

void solution() {
    // Write your solution here
    // Hint: Check what is std::cin.fail()
    float x,y;
    std::cout<<"Enter the first number: ";
    std::cin>>x;
    if(std::cin.fail()){
        std::cout<<"Invalid input. Please enter a valid number.\n";
    }else{
        //if passed get the second input
    std::cout<<"Enter the second number: ";
    std::cin>>y;
    if(std::cin.fail()){
        std::cout<<"Invalid input. Please enter a valid number.\n";
    }else{
        //if passes do the calculation
        doCalculation(x,y);
    }
    }


}
