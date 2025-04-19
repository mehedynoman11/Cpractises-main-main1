#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char A[1001];
    cin >> A;
    int i=0, j=strlen(A)-1;
    int flag = 1;
    while(i < j) {
        if (A[i] != A[j]) {
            flag = 0;
        }
        i++;
        j--;
    }
    if (flag == 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}