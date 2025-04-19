#include <stdio.h>

int recursionone(char a[], int i) {
    if (a[i] == '\0') return 0;
    int l = recursionone(a, i+1);
    return l+1;

}

int main() {
    // Write Your Code Here
    char a[101];
    scanf("%s", a);
    int length = recursionone(a, 0);
    printf("%d\n", length);
    return 0;
}