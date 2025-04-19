#include <stdio.h>

void oneToN(int i) {
    if (i == 0) return;
    oneToN(i-1);
    printf("%d\n", i);
}

int main() {
    // Write Your Code Here
    oneToN(5);
    return 0;
}