// #include <stdio.h>

// char small_to_capital(char c) {
//     // scanf("%c", c);
//     return (char)c;
// }

// int main() {
//     // Write Your Code Here
//     char ch;
//     scanf("%c", &ch);
//     char capital = small_to_capital(ch);
//     printf("%c", capital);

//     return 0;
// }

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
    printf("%c\n", c);
    

}

int main() {
    // Write Your Code Here
    small_to_capital();

    return 0;
}