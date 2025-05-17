#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int freq[26] = {0};
    for(int i=0;i<s.length();i++) {
        char c = s[i];
        freq[c - 'a']++;
    }
    for(char i='a';i<='z';i++) {
        if (freq[i-'a'] > 0) {
            cout << i << " : " << freq[i-'a'] << endl;
        }
    }

    return 0;
}