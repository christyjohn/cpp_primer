#include <iostream>
using std::cout; using std::endl;

#include<string>
using std::string;

#include<vector>
using std::vector;

int main()
{
    vector<string> text = {"Lorem ipsum dolor sit amet,", "consectetur adipiscing elit,",
        "sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.", "",
        "Ut enim ad minim veniam, ","quis nostrud exercitation ullamco laboris", 
        "nisi ut aliquip ex ea commodo consequat. "};

    for (auto it = text.cbegin(); it !=text.cend() && !it -> empty(); ++it)
        cout <<*it << endl; 

}