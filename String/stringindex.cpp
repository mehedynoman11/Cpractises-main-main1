#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    string b = "NO";
    cout << s.append(b) << endl;

    return 0;
}