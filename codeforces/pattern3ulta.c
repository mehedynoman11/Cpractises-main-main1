#include <stdio.h>

int main()
{
    // Write Your Code Here
    int N, K;
    scanf("%d", &N);
    K = N;

    for (int i = N; i >= 1; i--)
    {
        for (int j = 1; j <= K; j++)
        {
            printf("%d ", j);
        }
        K--;
        printf("\n");
    }

    return 0;
}