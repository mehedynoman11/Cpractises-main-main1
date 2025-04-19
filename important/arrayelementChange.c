#include <stdio.h>

void change_it(int arr[], int size) {
    for(int i=0;i<size;i++) {
        arr[size-1] = 100;
        printf("%d ", arr[i]);

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

    change_it(A, N);


    return 0;
}