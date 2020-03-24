#include <iostream>

int main()
{
    unsigned u = 10;
    int i = -42;
    std::cout << i + i << std::endl;
    std::cout << u + i << std::endl;

    unsigned t = -32;
    std::cout << t << std::endl;

    std::cout << std::endl; 

    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl;
    std::cout << u2 - u1 << std::endl;

    std::cout << std::endl;

    int i1 = 10, i2 = 42;
    std::cout << i2 - i1 << std::endl;
    std::cout << i1 - i2 << std::endl;
    std::cout << i1 - u << std::endl;
    std::cout << u - i1 << std::endl;
}