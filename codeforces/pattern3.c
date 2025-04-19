#include <stdio.h>

int main() {
    // Write Your Code Here
    int N, K=1;
    scanf("%d", &N);

    for(int i=1;i<=N;i++) {
        for(int j=1;j<=K;j++) {
            printf("%d ",j);
        }
        K++;
        printf("\n");
    }

    return 0;
}