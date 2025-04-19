#include <stdio.h>

int diamond() {
    // Write Your Code Here
    int N, S, K;
    scanf("%d", &N);
    K=1;
    S=N-1;

    for(int i=1;i<=N;i++) {
        for(int j=1;j<=S;j++){
            printf(" ");
        }
        for(int j=1;j<=K;j++) {
            printf("%d", i);
        }
        K+=2;
        S--;
        printf("\n");
    }
    S=1;
    K-=4;
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=S;j++){
            printf(" ");
        }
        for(int j=1;j<=K;j++) {
            printf("%d", j);
        }
        K-=2;
        S++;
        printf("\n");
    }
} 

int main() {
    diamond();
    diamond();
}