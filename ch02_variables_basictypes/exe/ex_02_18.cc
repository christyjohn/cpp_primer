#include <iostream>

int main()
{   
    int val = 42;
    int *p = &val;

    std::cout << "val: " << val << ", p: " << p 
        << ", content at address p: " << *p << std::endl; 

    *p = 32;

    std::cout << "New value of pointer p: " << *p <<std::endl;

    int val2 = 12;
    p = &val2;

    std::cout << "Pointer p is now pointing to memory location " << p
        << " which contains value " << *p << std::endl;

    return 0;
}