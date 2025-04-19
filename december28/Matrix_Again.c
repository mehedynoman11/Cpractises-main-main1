#include <stdio.h>

int main()
{
    // Write Your Code Here
    int N, M;
    scanf("%d %d", &N, &M);

    int a[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    //Last Row
    for (int j = 0; j < M; j++)
    {
        printf("%d ", a[N - 1][j]);
    }
    printf("\n");
    //last Column
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i][M-1]);
    }
    printf("\n");

    return 0;
}