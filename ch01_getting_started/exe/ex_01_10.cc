#include <iostream>

int main()
{
    int val = 10;
    // keep executing the while as long as val is greater than or equal to 0
    while (val >= 0) {
       std::cout << "The value is : "
              << val << std::endl;
        --val;
    }
    
    return 0;              
}