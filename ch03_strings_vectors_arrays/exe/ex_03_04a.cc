#include <string> 
using std::string; using std::getline;

#include <iostream> 
using std::cin; using std::cout; using std::endl;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int s1len = 0;
    int s2len = 0;

    while (s1[s1len]) 
        s1len++;

    while (s2[s2len]) 
        s2len++;

    cout << "s1len: " << s1len << ", s2len: " << s2len << endl;

    if (s1len == s2len)
        cout << "Both strings are of same length" << endl;
    else if (s1len < s2len)
        cout << "s2 is longer than s1" << endl;
    else
        cout << "s1 is longer than s2" << endl;

    return 0;
}