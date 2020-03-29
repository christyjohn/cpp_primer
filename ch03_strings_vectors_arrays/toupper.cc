#include <string>
using std::string;

#include <iostream>
using std::cout; using std::endl;

int main()
{
    string s("Hello World!!!");

    // convert to uppercase
    string orig = s;

    for(auto &c : s)        // for every char in s (note: c is a reference)
        // c is a reference, so this assignment changes the char in s
        c = toupper(c);

    cout << s << endl;

    // convert first word in s to uppercase
    s = orig;     // restore s to original case
    decltype(s.size())
        index = 0;

    // process characters in s until we run out of characters 
	// or we hit a whitespace
    while (index != s.size() && !isspace(s[index])) {
        // s[index] returns a reference so we can change 
		// the underlying character
        s[index] = toupper(s[index]);

        // increment the index to look at the next character 
		// on the next iteration
		++index; 
    }
    cout << s << endl;

    return 0;
}