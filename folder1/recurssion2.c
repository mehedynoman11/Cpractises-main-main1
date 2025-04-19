#include <stdio.h>

void one_to_five(int i) {
    if(i == 11) return;
    one_to_five(i + 1);
    printf("%d\n", i);
}

int main() {
    one_to_five(1);
}