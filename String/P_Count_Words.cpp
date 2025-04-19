#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    bool inWord = false;

    int count = 0;
    string word;
        for (char ch: s) {
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                if (!inWord) {
                    count++;
                    inWord = true;
                }
            } else {
                inWord = false;
            }
        }

    cout << count << endl;

    

    return 0;
}