#include <stdio.h>

long long summation(int arr[], int index, int n) {
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

    long long sum = summation(arr, 0, n); 
    printf("%lld\n", sum); // Removed trailing space and used long long format specifier
    return 0;
}
