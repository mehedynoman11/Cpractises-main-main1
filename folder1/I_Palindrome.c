#include <stdio.h>
#include <string.h>

void palinDrome(int n) {
    char str[20];

    sprintf(str, "%d", n);
    int len = strlen(str);
    int palindrome = 1;

    if(str[0] == '0' && len > 0) {
        palindrome = 0;
    } else {
        for (int i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            palindrome = 0;
        }
    }
    }
    if(palindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
}

int main() {
    // Write Your Code Here
    int N;
    scanf("%d", &N);
    palinDrome(N);

    return 0;
}