#include <stdio.h>

void fun(int n) {
    if (n == 0) return;
    int x = n % 10;
    fun(n / 10);
    printf("%d ", x);
}

int main() {
    // Write Your Code Here
    // fun(1234);
    int test;
    scanf("%d", &test);
    for(int i=0;i<test;i++) {
        int n;
        scanf("%d", &n);
        fun(n);
        
        if (n == 0) {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}