#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    bool found = false;
    string findWord = "Ratul";
    stringstream ss(s);
    string word;
    while (ss >> word) 
    {
        if (word == "Ratul"){
            found = true;
        }
    }

    if (found == true ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    

    return 0;
}