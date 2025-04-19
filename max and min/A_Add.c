#include <stdio.h>

void summation(int *P, int *Q) {
    int sum = *P + *Q;
    printf("%d\n", sum);
}

int main() {
    // Write Your Code Here
    int X, Y;
    scanf("%d %d",&X,&Y);
    summation(&X,&Y);
    return 0;
}