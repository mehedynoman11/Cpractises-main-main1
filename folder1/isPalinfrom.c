#include <stdio.h>
#include <string.h>

void isPalindome(char *str) {
    int len = strlen(str);
    int ispalindome = 1;
    for(int i=0;i<len / 2; i++) {
        if(str[i] != str[len - i - 1] ){
            ispalindome = 0;
            break;
        }
    }
    if (ispalindome) 
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
}

int main() {
    char str[1001];
    scanf("%s", str);
    isPalindome(str);


    return 0;
}
