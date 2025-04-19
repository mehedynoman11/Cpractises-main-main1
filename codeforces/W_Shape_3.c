// #include <stdio.h>

// int main()
// {
//     // Write Your Code Here
//     int N, S, K = 1;
//     scanf("%d", &N);

//     S = N - 1;
//     for (int i = 1; i <= N; i++)
//     {
//         for (int j = 1; j <= S; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= K; j++)
//         {
//             printf("*");
//         }
//         K += 2;
//         S--;
//         printf("\n");
//     }
//     S = 1;
//     K = N * 2 - 3;
//     for (int i = N - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= S; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= K; j++)
//         {
//             printf("*");
//         }
//         K -= 2;
//         S++;
//         printf("\n");
//     }

//     return 0;
// }



#include <stdio.h>

int main()
{
    // Write Your Code Here
    int N, S, K = 1;
    scanf("%d", &N);

    S = N - 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= S; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= K; j++)
        {
            printf("*");
        }
        K += 2;
        S--;
        printf("\n");
    }

    S = 1;
    K = N * 2-1;
    for (int i = N; i >= 1; i--)
    {
        for (int j = 2; j <= S; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= K; j++)
        {
            printf("*");
        }
        K -= 2;
        S++;
        printf("\n");
    }

    return 0;
}