#include <iostream>
#include <set>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<char> solved; //!To keep track of unique problem soved
        int balloons = 0;
        for (char c : s) {
            if (solved.find(c) == solved.end()) {
                //* First time solving this problem
                balloons += 2;
                solved.insert(c);
            } else {
                //* Problem already solved before
                balloons += 1;
            }
        }
        cout << balloons << endl;
    }

    return 0;
}