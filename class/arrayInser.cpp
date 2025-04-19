#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int arr[N];

    for(int i=0;i<N;i++) {
        cin >> arr[i];    
    }

    int pos, value;
    cin >> pos >> value;
    for(int i=0;i>=pos + 1;i--){
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";

    }
    

    return 0;
}