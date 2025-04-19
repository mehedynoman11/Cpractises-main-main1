#include <stdio.h>

void small_to_capital() {
    char c;
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
    {
        c = c - 'a' + 'A';
    } else if (c >= 'A' && c <= 'Z') {
        c = c - 'A' + 'a';
    }
    printf("%d\n", c);
    

}

int main() {
    // Write Your Code Here
    small_to_capital();

    return 0;
}