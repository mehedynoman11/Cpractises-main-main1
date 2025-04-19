// #include <stdio.h>
// #include <limits.h>

// void max_min(int arr[], int size, int *max, int *min) {
//     *max = INT_MAX; 
//     *min = INT_MIN;
//     for(int i=0;i<size;i++) {
//         if (arr[i] > *max) {
//             *max = arr[i];
//         }
//         if (arr[i] < *min) {
//             *min = arr[i];
//         }
//     }
    
// }

// int main() {
//     // Write Your Code Here
//     int N;
//     scanf("%d", &N);

//     int A[N];
//     for(int i=0;i<N;i++) {
//         scanf("%d", &A[i]);
//     }

//     int max, min;
//     max_min(A,N,&max,&min);
//     printf("%d %d", max, min);
//     return 0;
// }

#include <stdio.h>
#include <limits.h>

void max_min(int arr[], int size, int *max, int *min) {
    *max = INT_MIN;
    *min = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i]; // Update max
        }
        if (arr[i] < *min) {
            *min = arr[i]; // Update min
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int max, min;
    max_min(A, N, &max, &min); 
    printf("%d %d", min, max);

    return 0;
}
