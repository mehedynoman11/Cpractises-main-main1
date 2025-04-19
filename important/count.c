#include <stdio.h>

int my_len()
{
    char C;
    int count[26] = {0};
    while (scanf("%c", &C) != EOF)
    {
        if (C >= 'a' && C <= 'z')
        {
            count[C - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%d\n", count[i]);
        }
    }
}

int main()
{
    // Write Your Code Here
    my_len();
    return 0;
}