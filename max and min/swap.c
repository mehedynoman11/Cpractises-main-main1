#include <stdio.h>

void swap(int *p, int *q) {
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

int main() {
    int a=6, b=5;
    swap(&a, &b);
    printf("%d %d\n",a,b);

    return 0;
}