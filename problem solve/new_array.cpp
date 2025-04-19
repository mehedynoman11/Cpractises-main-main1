#include <iostream>
#include <vector>
using namespace std;
vector<int> arrayConcatenation(vector<int> &A, vector<int> &B) {
    vector<int> C;
    C.reserve(A.size() + B.size());
    C.insert(C.end(), B.begin(), B.end());
    C.insert(C.end(), A.begin(), A.end());

    return C;
}
int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    for(int i=0;i<n;i++) {
        cin >> A[i];
    }

    for(int i=0;i<n;i++) {
        cin >> B[i];
    }

    vector<int> C = arrayConcatenation(A,B);
    for(int i=0;i<C.size();i++) {
        cout << C[i] << " ";
    }

    return 0;
}