// #include <iostream>
// #include <vector>
// #include <math.h>
// using namespace std;

// int main() {
//     vector<int> A(5);

//     for(int& i : A) {
//         cin >> i;
//     }
//     for(int i : A) {
//         cout << i << " ";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int N, A, I;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++) {
        cin >> arr[i];
    }

    cin >> A >> I;

    for(int i=N-1;i > A; i--) {
        arr[i] = arr[i-1];
    }

    arr[A] = I;

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    


    return 0;
}