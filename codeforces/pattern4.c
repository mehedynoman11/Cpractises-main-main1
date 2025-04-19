#include <stdio.h>

int main()
{
    // Write Your Code Here
    int N, S, K;
    scanf("%d", &N);
    S = N - 1;
    K = 1;
    for (int i = 1; i <= (2 * N - 1); i++)
    {
        for (int j = 1; j <= S; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= K; j++)
        {
            printf("*");
        }
        if (i < N - 1)
        {
            S--;
            K += 2;
        }
        else
        {
            S++;
            K -= 2;
        }
        printf("\n");
    }

    return 0;
}