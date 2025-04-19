#include <stdio.h>

void swap_it(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("%d %d\n",*a,*b);
}

int main() {
    // Write Your Code Here
    int A,B;
    scanf("%d %d", &A, &B);
    swap_it(&A,&B);

    return 0;
}