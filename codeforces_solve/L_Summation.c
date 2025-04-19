// #include <stdio.h>

// int summation(int arr[], int index, int n) {
//     if (index >= n) return 0;
//     return arr[index] + (arr, index + 1, n);

// }

// int main() {
//     //* Write Your Code Here
//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     for(int i=0;i<n;i++) {
//         scanf("%d", &arr[i]);
//     }
//     int sum = summation(arr, 0, n);
//     printf("%d\n", sum);
    
//     return 0;
// }

#include <stdio.h>

int summation(int arr[], int index, int n) {
    if (index >= n) return 0; 
    return arr[index] + summation(arr, index + 1, n); 
}

int main() {
    int n;
    scanf("%d", &n); 
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    int sum = summation(arr, 0, n); 
    printf("%d\n", sum);
    return 0;
}
