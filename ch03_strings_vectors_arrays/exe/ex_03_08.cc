#include <string> 
using std::string;

#include <iostream> 
using std::cin; using std::cout; using std::endl;

int main()
{
    string s("some word");
    int index = 0;
    while ((index != s.size())) {
        if (!isspace(s[index]))
            s[index] = 'X';
        ++index;
    }
    cout << s << endl;

    for (index; index < s.size(); index++) {
        if (!isspace(s[index]))
            s[index] = 'X';
        ++index;
    }
    cout << s << endl;

    return 0;
}