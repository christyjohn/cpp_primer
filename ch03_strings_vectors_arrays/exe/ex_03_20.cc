#include <vector>
using std::vector;

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
    vector<int> numbers;
    int number;

    while (cin >> number)
        numbers.push_back(number);

    int lo = 0, hi = numbers.size() - 1;

    // adding adjaccent numbers
    for (int i = 0; i < numbers.size(); i=i+2) {
        cout << numbers[i] + numbers[i+1] << " ";
    }
    cout << endl;

    /* prints the sum of
    the first and last elements, followed by the sum of the second and second-to-
    last, and so on */
    for (lo; lo <= hi; lo++,hi--) {
        //cout << "lo : " << lo << ", hi: " << hi << endl;
        
        if (lo == hi)
            cout << numbers[lo];
        else
            cout << numbers[lo] + numbers[hi] << " ";
        
    }
    cout << endl;

    return 0;
}