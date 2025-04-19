#include <stdio.h>

int main()
{
    // Write Your Code Here
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if (a[i] < a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    int maxSum = 0;
    for(int i=0;i<k;i++) {
        maxSum += a[i];
    }
    printf("%d\n", maxSum);
    return 0;
}