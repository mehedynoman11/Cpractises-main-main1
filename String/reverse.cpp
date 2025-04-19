#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void reverse(stringstream& ss) {
    string word;
    if (ss>>word)
    {
        reverse(ss);
        cout << word << endl;
    }
}

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    // string word;
    // while (ss>>s)
    //     cout << s << endl;

    reverse(ss);

    


    return 0;
}