#include <iostream>

int main()
{
    int i = 42;
    int *p = &i;

    std::cout << "p: " << p << ", *p: " << *p << std::endl;

    int *&r = p;

    std::cout << "*&r: " << *&r << ", p: " << p << std::endl;
    std::cout << "&r: " << &r << std::endl;

    r = &i;
    std::cout << "*&r: " << *&r << ", p: " << p << std::endl;

    *r = 10;
    std::cout << "*p: " << *p << ", i: " << i << std::endl;


    return 0;
}