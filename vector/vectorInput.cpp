#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int N: a) {
        cout << N << " ";
    }

    return 0;
}