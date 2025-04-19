#include <stdio.h>

int sort_number(int *P, int *Q, int *R) {
    int temp;
    if (*P > *Q) {
        temp = *P;
        *P = *Q;
        *Q = temp;
    }
    if (*P > *R) {
        temp = *P;
        *P = *R;
        *R = temp;
    }
    if (*Q > *R) {
        temp = *Q;
        *Q = *R;
        *R = temp;
    }
}

int main() {
    // Write Your Code Here
    int A, B, C;
    scanf("%d %d %d", &A,&B,&C);

    int orginalA = A, orginalB = B, orginalC = C;

    sort_number(&A,&B,&C);
    //* ascending order
    printf("%d\n%d\n%d\n\n",A,B,C);
    //* original oorder
    printf("%d\n%d\n%d\n",orginalA,orginalB,orginalC);

    return 0;
}