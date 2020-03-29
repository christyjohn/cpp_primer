#include <string>
using std::string;

#include <iostream>
using std::cout; using std::cin; using std::endl;

int main()
{
    string  s;

    cin >> s;
    
    for (char &c : s) 
		if (ispunct(c))      // if the character is punctuation
            c = ' ';

    cout << s << endl;

    return 0;
}