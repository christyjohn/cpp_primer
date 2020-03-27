#include <string> 
using std::string; using std::getline;

#include <iostream> 
using std::cin; using std::cout; using std::endl;

int main()
{
    string line;

    // read input a line at a time untilend-of-file
    while (getline(cin, line))
        if(line.size() > 80)
            cout << line << endl;

    return 0;
}