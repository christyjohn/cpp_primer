#include <string>
using std::string;

#include <iostream>
using std::cout; using std::endl;

int main()
{
    string  s("Hello World!!!");
    // punct_cnt has the same type that s.size returns
    decltype(s.size()) punct_cnt = 0;

    // count the number of punctuation characters in s
    for (auto c : s)         // for every char in s
		if (ispunct(c))      // if the character is punctuation
            ++punct_cnt;     // increment the punctuation counter

    cout << punct_cnt << " punctuation characters in "
         << s << endl;
    return 0;
}