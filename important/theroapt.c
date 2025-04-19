#include <stdio.h>

int main()
{
    // Write Your Code Here
    int N, S, K;
    scanf("%d", &N);
    S = N - 1;
    K=1;

    for (int i = 1; i <= N; i++)
    {
        for(int j=1; j<=S;j++) {
            printf(" ");
        }
        for (int j =1; j <= K; j++)
        {
            printf("%d ",j);
        }
        S--;
        K++;
        printf("\n");
    }

    return 0;
}