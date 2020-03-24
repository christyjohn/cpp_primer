#include <iostream>

int main()
{
    int val1 = 0, val2 = 0;
    int min, max;
    std::cout << "Enter 2 numbers" << std::endl;
    std::cin >> val1 >> val2;

    if (val1 < val2) 
    {
        min = val1;
        max = val2;
    } 
    else
    {
        min = val2;
        max = val1;
    } 

    while (min <= max) {
       std::cout << "The value is : "
              << min << std::endl;
        min++;
    }
   
    return 0;              
}