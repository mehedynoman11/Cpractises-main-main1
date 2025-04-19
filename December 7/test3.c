#include <stdio.h>

int strtoarry(char str[]){
    int length = 0;
    for(int i=0;str[i] != '\0';i++){
        length++;
    }
    return length;
}

int main() {
    // Write Your Code Here
    char str[101];
    scanf("%s", str);
    int len = strtoarry(str);
    printf("%d\n", len);

    return 0;
}