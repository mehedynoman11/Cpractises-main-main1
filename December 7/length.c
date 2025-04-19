#include <stdio.h>

int main() {
    // Write Your Code Here
    char str[101];
    scanf("%s", str);
    int length = 0;
    // for(int i = 0; str[length] != '\0'; i++) {
    //     length++;
    // }
    while(str[length] != '\0'){
        length++;
    }
    printf("%d\n", length);
    return 0;
}