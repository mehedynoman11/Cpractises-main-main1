#include <iostream>
using namespace std;
int main() {
    
    int A, B;
    char S;
    cin >> A >> S >> B;

    if ((S == '>' && A > B) || (S == '<' && A < B) || (S == '=' && A == B)){
        cout << "Right";
    } else {
        cout << "Wrong";
    }

    return 0;
}