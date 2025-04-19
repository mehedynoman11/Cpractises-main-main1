#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int main() {
    int T;
    cin >> T;
    
    while(T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for(int i=0;i<N;i++) {
            cin >> A[i];
        }

        int minSum = INT_MAX;

        for(int i=0;i<N;i++) {
            for(int j=i+1;j<N;j++) {
                int currentSum = A[i] + A[j] + j - i;
                minSum = min(minSum, currentSum);
            }
        }

        cout << minSum << endl;
    }

    return 0;
}