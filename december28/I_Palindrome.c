#include <stdio.h>
#include <string.h>

int main() {
    // Write Your Code Here
    char c[1001];
    scanf("%s", &c);
    int len = strlen(c);
    int isPalindome = 1;
    for(int i=0;i<len/2;i++){
        if (c[i] != c[len - 1 - i])
        {
            isPalindome = 0;
        }
    }
    if (isPalindome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}