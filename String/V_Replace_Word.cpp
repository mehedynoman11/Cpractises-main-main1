#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    string replaceWord = "EGYPT";
    string replaceBy = " ";
    size_t pos = s.find(replaceWord);
    while (pos != string::npos) {
        s.replace(pos, replaceWord.size(), replaceBy);

        pos = s.find(replaceWord, pos + replaceBy.size());
    }
    cout << s << endl;
    return 0;
}