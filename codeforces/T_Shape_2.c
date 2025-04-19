#include <stdio.h>

int main() {
    // Write Your Code Here
    int N,S,K=1;
    scanf("%d", &N);
    S=N-1;

    for(int i=1;i<=N;i++) {
        for(int j=1;j<=S;j++) {
            printf(" ");
        }
        for(int j=1;j<=K;j++) {
            printf("*");
        }
        K+=2;
        S--;
        printf("\n");
    }

    return 0;
}