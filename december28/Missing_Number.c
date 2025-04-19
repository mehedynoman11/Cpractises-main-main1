#include <stdio.h>

int main()
{
    // Write Your Code Here
    int t, s, a, b, c;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &s, &a, &b, &c);

        int sumN = s - (a + b + c);
        printf("%d\n", sumN);
    }

    return 0;
}