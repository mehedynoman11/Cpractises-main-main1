#include <stdio.h>

void recalls(int i) {
    if (i == 10001) return;
    printf("%d\n", i);
    recalls(i + 1);
}

int main() {
    // Write Your Code Here
    recalls(1);
    
    return 0;
}