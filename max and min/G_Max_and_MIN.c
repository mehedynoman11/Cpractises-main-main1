#include <stdio.h>


void max_and_min(int arr[], int size, int *max, int *min) {
    *max = *min = arr[0];

    for(int i=1;i<size;i++) {
        if(arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    // Write Your Code Here
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d", &A[i]);
    }

    int max, min;
    max_and_min(A, N, &max, &min);
    printf("%d %d\n", min, max);

    return 0;
}