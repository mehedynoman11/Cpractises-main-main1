#include <iostream>
using namespace std;
int main() {
    int N, Q;
    cin >> N >> Q;
    int A[N];
    for(int i=0;i<N;i++) {
        cin >> A[i];
    }

    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        L--;
        R--;
        int sum = 0;
        for(int i=L;i<=R;i++) {
            sum += A[i];
        }
        cout << sum << endl;
    }
    
    return 0;
}