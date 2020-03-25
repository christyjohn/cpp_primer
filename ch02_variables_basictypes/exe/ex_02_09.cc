#include <iostream>

int main() 
{
    // std::cin >> int input_value; // will not work as type name is not expected here.
    //int i = { 3.14 };
    // std:: cout << i; // will not work as narrowing conversion from 
    //double to int is not possible. but follwowing is possible. it will truncate
    int i = (3.14);
    std:: cout << i << std::endl;
    
    //double salary = wage = 9999.99; // will not work. identifier "wage" is undefined

    i = 5.14;
    std:: cout << i << std::endl;
    return 0;
}