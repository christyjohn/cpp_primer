#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

int main() 
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto &i : v)
        i *=i;

    for (auto i : v)
        cout << i << " ";

    cout << endl;

    return 0;
}