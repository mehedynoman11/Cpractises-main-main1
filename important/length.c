#include <stdio.h>

int my_len()
{
    char C;
    int length = 0;
    while (scanf("%c", &C) != EOF)
    {
       if (C != '\n')
       {
        length++;
       }
       
    }
    printf("%d\n", length);
}

int main()
{
    // Write Your Code Here
    my_len();
    return 0;
}