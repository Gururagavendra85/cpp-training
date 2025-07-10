#include "solution.h"
#include <iostream>



int main() {
    SimpleUniquePtr<Test> ptr(new Test(10));
    ptr->show();
    std::cout << "The value is: " << (*ptr).value << std::endl;
    return 0;
}
