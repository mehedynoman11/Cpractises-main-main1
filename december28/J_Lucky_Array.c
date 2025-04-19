#include <stdio.h>
#include <limits.h>

int main() {
    // Write Your Code Here
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }

    int min = INT_MAX;
    for(int i=0;i<n;i++ ) {
        if (a[i] < min) {
        min=a[i];
        }
    }
    // printf("%d", min);
    int count = 0;
    for(int i=0;i<n;i++) {
        if (a[i] == min) {
            count++;
        }
    }

    if (count % 2 == 1)
    {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }
    

    return 0;
}