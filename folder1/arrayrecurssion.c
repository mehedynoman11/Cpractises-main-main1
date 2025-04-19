#include <stdio.h>

void array_recurssion(int arr[], int size, int i) {
    if (i == size) return;
    printf("%d\n", arr[i]);
    array_recurssion(arr, size, i+1);

}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d", &A[i]);
    }
    int i;

    array_recurssion(A, N, 0);
}
