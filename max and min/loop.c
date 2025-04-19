#include <stdio.h>

int main() {
    // Write Your Code Here
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(i == n) {
            printf("%d", i);
        } else {
            printf("%d ", i);
        }
    }
    

    return 0;
}