#include <string> 
using std::string;

#include <iostream> 
using std::cin; using std::cout; using std::endl;

int main()
{
    string s("some word");

    for (char &c : s)   // can also use auto instead of char
        if (!isspace(c))
            c = 'X';

    cout << s << endl;

    return 0;
}