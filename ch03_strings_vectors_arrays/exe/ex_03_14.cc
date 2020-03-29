#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <vector>
using std::vector;

int main() 
{
    vector<int> numbers;
    int ival;

    while(cin >> ival)
        numbers.push_back(ival);

    cout << numbers.size() << endl;

    return 0;
}