#include <stdio.h>

void oneToN(int i) {
    if (i == 0) return;
    printf("%d\n",i);
    oneToN(i - 1);
}

int main() {
    // Write Your Code Here
    oneToN(50);
    return 0;
}