#include <stdio.h>

void reverse(int i) {
    if (i == 6) return;
    reverse(i + 1);
    printf("%d\n", i);
}

int main() {
    // Write Your Code Here
    reverse(1);

    return 0;
}