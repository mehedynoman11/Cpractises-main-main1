#include <iostream>
#include <string>
using namespace std;
int main() {
    string S = "Hello Noman";
    // cout << *S.begin() << endl;

    for(string:: iterator it=S.begin();it < S.end();it++) {
        cout << *it << " ";
    }

    return 0;
}