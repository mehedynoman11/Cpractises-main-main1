#include <stdio.h>

long long mysum(int arr[], int index, int n) {
    if (index >= n) return 0;
    return arr[index] + mysum(arr, index + 1, n);
    }

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }

    long long sum = mysum(arr, 0, N);
    printf("%lld\n", sum);
}