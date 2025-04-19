#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for(int i=0;i<n;i++) {
        cin >> A[i];
    }

    int positiveNum = 1;
    int negativeNum = 2;

    for(int i=0;i<n;i++) {
        if (A[i] > 0) {
            A[i] = positiveNum;
        } else if (A[i] < 0) {
            A[i] = negativeNum;
        }
    }

    for(int i=0;i<n;i++) {
        cout << A[i] << " ";
    }

    return 0;
}