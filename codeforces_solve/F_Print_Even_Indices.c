#include <stdio.h>

void printEvenIndices(int arr[], int index) {
    if (index < 0) return;
    printf("%d", arr[index]);
    if (index > 0) printf(" ");
    printEvenIndices(arr, index - 2);
}

int main() {
    // Write Your Code Here
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    printEvenIndices(a , (n % 2 == 0 ? n-2 : n-1));
    return 0;
}