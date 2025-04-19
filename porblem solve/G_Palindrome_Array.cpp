#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++) {
        cin >> arr[i];
    }

    int flag = 1;

    int i=0, j=N-1;
    while (i < j)
    {
        if (arr[i] != arr[j] ) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag == 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    

    return 0;
}