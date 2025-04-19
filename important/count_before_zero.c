#include <stdio.h>

void count_before_zero(int arr[], int size)
{

    int count = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == 0)
        {
            break;
        }
        count++;
    }
    printf("%d\n", count);
}

int main()
{
    // Write Your Code Here
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    count_before_zero(A, N);

    return 0;
}