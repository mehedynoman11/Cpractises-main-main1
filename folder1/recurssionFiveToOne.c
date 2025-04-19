#include <stdio.h>

void fiveToOne(int i) {
    if (i == 0) return;
    printf("%d\n", i);
    fiveToOne(i - 1);
}

int main() {
    // Write Your Code Here
    fiveToOne(5);
    
    return 0;
}