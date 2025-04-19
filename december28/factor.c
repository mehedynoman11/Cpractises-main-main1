#include <stdio.h>

long long int factorial(long long int n) {
    if (n == 0)
    {
        return 1;
    }
    
    long long int ans = factorial(n-1);
    return ans * n;
}

int main() {
    // Write Your Code Here
    long long int n;
    scanf("%lld", &n);
    long long int ans = factorial(n);
    printf("%lld\n", ans);
    return 0;
}