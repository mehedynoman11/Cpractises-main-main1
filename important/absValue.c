#include <stdio.h>

int my_abs(int *n) {
    int number=0;
    if (*n < number)
    {
        *n = *n - *n*2;
        printf("%d\n", *n);
    } else {
        printf("%d\n", *n);
    }
    
}

int main() {
    // Write Your Code Here
    int N;
    scanf("%d", &N);
    my_abs(&N);
    
    return 0;
}