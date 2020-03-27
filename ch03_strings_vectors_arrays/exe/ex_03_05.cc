#include <string> 
using std::string; using std::getline;

#include <iostream> 
using std::cin; using std::cout; using std::endl;

int main()
{
    string line = "";
    string word;

    while (cin >> word)
        line += word;

    cout << line << endl; 

    return 0;
}