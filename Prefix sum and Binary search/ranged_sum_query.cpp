#include <iostream>
using namespace std;
int main() {
    int N, Q;
    cin >> N >> Q;
    int a[N];
    for(int i=0;i<N;i++) {
        cin >> a[i];
    }
    int prefixSum[N];
    prefixSum[0] = a[0];
    for(int i=1;i<N;i++) {
        prefixSum[i] = a[i] + prefixSum[i-1];
    }

    // for(int i=0;i<N;i++) {
    //     cout << prefixSum[i] << " ";
    // }

    while (Q--)
    {
        int L, R;    
        cin >> L >> R;
        L--;
        R--;
        int sum = 0;
        if (L == 0) sum = prefixSum[R];
        else sum = prefixSum[R] - prefixSum[L-1];
        cout << sum << endl;
    }
    

    return 0;
}