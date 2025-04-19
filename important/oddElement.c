#include <stdio.h>

int count_odd(int arr[], int size ) {
    int odd = 0;
    for(int i=0;i<size;i++) {
        if (arr[i] % 2 != 0) {
            odd++;
        }
    }
    printf("%d\n", odd);
    // return odd;
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    count_odd(A, N);
    
    return 0;
}