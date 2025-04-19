#include <stdio.h>

int main()
{
    // Write Your Code Here
    int n;
    scanf("%d", &n);

    int w, h;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &w, &h);
        if (w == h)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}