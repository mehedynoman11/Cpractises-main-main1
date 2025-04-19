#include <stdio.h>
int count(int n) {
    if (n == 0)
    {
        return 0;
    } else {
        return 1 + count(n / 10);
    }
    
}

int main() {
    // Write Your Code Here
    int n;
    scanf("%d", &n);
    int ans = count(n);
    printf("%d\n", ans);
    return 0;
}