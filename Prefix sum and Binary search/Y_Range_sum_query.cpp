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

    long long sum = 0;
    for(int q=0;q<Q;q++) {
        int L, R;
        cin >> L >> R;
        for(int i=L-1;i<R;i++) {
            sum+=A[i];
        }
        cout << sum << endl;
    }


    return 0;
}