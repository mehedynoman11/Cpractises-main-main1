#include <stdio.h>

int main()
{
    // Write Your Code Here
    int N, Size;
    scanf("%d", &N);

    Size = 2 * N - 1;
    int a[Size][Size];
    int start = 0;
    int end = Size - 1;
    int num = N;

    while (num > 0)
    {
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {
                if (i == start || i == end || j == start || j == end)
                {
                    a[i][j] = num;
                }
            }
        }
        start++;
        end--;
        num--;
    }

    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}