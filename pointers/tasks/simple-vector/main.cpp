#include "solution.h"
#include <iostream>
#include <stdexcept>

int main() {
    
    // Create a new IntVector
    IntVector vec;
    std::cout << "Created a new IntVector. Current size: " << vec.size() << "\n";
    
    // Add some elements
    std::cout << "Adding elements: 10, 20, 30\n";
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    
    std::cout << "Current size: " << vec.size() << "\n";
    
    return 0;
}

