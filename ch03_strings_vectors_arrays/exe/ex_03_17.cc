#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
    vector<string> words;
    string word;

    while(cin >> word)
        words.push_back(word);
    
    int count =  1;

    for (string word: words) {
        
        if (count % 8 != 0) {
            for (auto &c : word) {
                c = toupper(c);
                cout << c;
            }
            cout << " ";
        } 
        if (count %8 == 0) {
            cout << endl;
            for (auto &c : word) {
                c = toupper(c);
                cout << c;
            }
            cout << " ";
        }
        ++count;
    }
    cout << endl;
        
    return 0;
}