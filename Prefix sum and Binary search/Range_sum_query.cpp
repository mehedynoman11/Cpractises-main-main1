#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for(int i=0;i<N;i++) {
        cin >> A[i];
    }

    vector<long long> prefixSum(N+1,0);
    for(int i=0;i<=N;i++) {
        prefixSum[i] = prefixSum[i-1] + A[i-1];
    }
    for(int q=0;q<Q;q++) {
        int L, R;
        cin >> L >> R;
        long long sum = prefixSum[R] - prefixSum[L-1];
        cout << sum << endl;
    }


    return 0;
}