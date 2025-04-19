#include <stdio.h>

void pr(int i)
{
    if (i <= 0) return;
    printf("%d", i);
    if (i > 1) printf(" ");
    pr(i - 1);
}

int main()
{
    int I;
    scanf("%d", &I);
    pr(I);

    return 0;
}