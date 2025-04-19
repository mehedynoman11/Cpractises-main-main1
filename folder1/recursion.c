#include <stdio.h>

void recall(int i) {
    if (i == 6) return;
    printf("%d ", i);
    recall(i+1);
}

int main() {
    recall(1);
}