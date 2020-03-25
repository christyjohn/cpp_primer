#include <iostream>

int main()
{
    int i, &ri = i;

    std::cout << i << " " << ri << std::endl;

    i = 5;
    std::cout << i << " " << ri << std::endl;

    ri = 10;
    std::cout << i << " " << ri << std::endl;

    return 0;
}

/** sample output
 * 21866 21866
 * 5 5
 * 10 10
*/