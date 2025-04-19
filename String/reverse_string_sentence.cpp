#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    string word, result;
    stringstream ss(s);
    while(ss>>word) {
        reverse(word.begin(), word.end());
        if (!result.empty()) {
            result += " ";
        }
        result += word;
    }

    cout << result ;

    return 0;
}