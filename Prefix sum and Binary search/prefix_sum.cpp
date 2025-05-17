// arr[] = {2, 4, 1, 3, 7, 5, 6}
// Queries:
// 1. L = 1, R = 3 → sum of arr[1] to arr[3] = 4 + 1 + 3 = 8
// 2. L = 2, R = 5 → sum of arr[2] to arr[5] = 1 + 3 + 7 + 5 = 16

#include <iostream>
using namespace std;
int main() {
    // int L, R;
    // cin>>L>>R;
    int arr[] = {2, 4, 1, 3, 7, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int prefix[n];
    prefix[0] = arr[0];
    for(int i=1;i<n;i++) {
        prefix[i] = arr[i] + prefix[i-1];
    }

    int L1 = 1, R1 = 3;
    int L2 = 2, R2 = 5;
    
    int sum1 = prefix[R1] - (L1 > 0 ? prefix[L1-1] : 0);
    int sum2 = prefix[R2] - (L2 > 0 ? prefix[L2-1] : 0);

    cout<<sum1<<endl;
    cout<<sum2<<endl;

    return 0;
}