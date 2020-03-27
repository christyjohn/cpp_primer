#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    string s1  = "hello, ", s2 = "world\n";
	string s3 = s1 + s2;   // s3 is hello, world\n
	cout << s1 << s2 << s3 << endl;

	s1 += s2;   // equivalent to s1 = s1 + s2
	cout << s1;
	
	string s4 = "hello", s5 = "world";  // no punctuation in s4 or s2
	string s6 = s4 + ", " + s5 + '\n';
	cout << s4 << s5 << "\n" << s6 << endl;

    /*
     * When we mix strings and string or character literals, at least one operand to each
     *   + operator must be of string type
     */
    string s7 = s1 + ", "; // ok: adding a string and a literal
    // string s8 = "hello " + ", ";  // error: no string operand
    string s9 = s1 + ", " + "world"; // ok: each + has a string operand
    //string s10 = "hello " + ", " + s2; // error: can't add string literals

    return 0;
}