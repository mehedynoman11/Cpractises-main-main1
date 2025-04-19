#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

void reverseWord(string& word) {
    int start = 0;
    int end = word.length() - 1;

    while (start < end) {
        swap(word[start], word[end]);
        start++;
        end--;
    }
}

int main() {
    string s;
    getline(cin, s);
    string word, result;
    stringstream ss(s);

    bool first = true;
    while(ss>>word) {
        if(!first) {
            cout << " ";
        } else {
            first = false;
        }
        reverseWord(word);
        cout << word;
    }
    cout << endl;

    return 0;
}