#include <stdio.h>

int main() {
    // Write Your Code Here
    int N, size;
    scanf("%d", &N);

    size = 2 * N - 1;
    int a[size][size];

    int start = 0;
    int end = size - 1;
    int num = N;
    while (num > 0) {
        for(int i = start; i <= end; i++) {
            for(int j = start; j <= end; j++) {
                if(i == start || i == end || j == start || j == end) {
                    a[i][j] = num;
                }
            }
        }
        ++start;
        --end;
        --num;
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}