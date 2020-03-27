#include <string> 
using std::string; using std::getline;

#include <iostream> 
using std::cin; using std::cout; using std::endl;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

   if (s1 == s2)
        cout << "Both strings are equal." << endl;
    else if (s1 < s2)
        cout << "s2 is greater than s1" << endl;
    else
        cout << "s1 is greater than s2" << endl;

    return 0;
}