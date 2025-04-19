#include <stdio.h>

void pr(int i)
{
    if (i <= 0) return;
    pr(i - 1);
    printf("I love Recursion\n");
}

int main()
{
    int I;
    scanf("%d", &I);
    pr(I);

    return 0;
}