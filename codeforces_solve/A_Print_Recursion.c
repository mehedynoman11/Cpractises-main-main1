#include <stdio.h>

void recursionOne(int i) {
    if (i <= 0 ) return;
    recursionOne(i - 1);
    // printf("%d\n", i);
    printf("I love Recursion\n");
}

int main() {
    int n;
    scanf("%d", &n);
    recursionOne(n);
    return 0;
}