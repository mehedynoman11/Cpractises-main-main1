// #include <stdio.h>

// int char_to_ascii(char c) {
//     return (int)c;
// }

// int main() {
//     char ch;
//     scanf("%c", &ch); 
//     int ascii = char_to_ascii(ch);
//     printf("%d\n", ascii);

//     return 0;
// }


#include <stdio.h>

void my_function() {
    char ch;
    scanf("%c", &ch);
    
    printf("%d\n", (int)ch);
}

int main() {
    // int ascii = my_function();
    // printf("%d", ascii);
    my_function();

    return 0;
}