#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;    
    long long a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    long long prefixSum[n];
    prefixSum[0] = a[0];
    for(int i=1;i<n;i++) {
        prefixSum[i] = a[i] + prefixSum[i-1];
    }
    for(int i=n-1;i>=0;i--){
        cout << prefixSum[i] << " ";
    }

    return 0;
}