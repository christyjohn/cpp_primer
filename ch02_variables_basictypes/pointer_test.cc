#include <iostream>

int main()
{
    int ival = 42;
    int* p = &ival;

    std::cout << *p << ", " << &ival << std::endl;
    std::cout << p << ", " << ival << std::endl;

    *p = 23;
    std::cout << *p << ", " << &ival << std::endl;
    std::cout << p << ", " << ival << std::endl;

    int& r2 = *p;
    std::cout << *p << ", " << &r2 << std::endl;
    std::cout << p << ", " << r2 << std::endl;

    return 0;
}