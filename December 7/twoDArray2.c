#include <stdio.h>

int main() {
    // Write Your Code Here
    int row, column;
    scanf("%d %d", &row, &column);
    int a[row][column];

    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    //!* 2d array print
    // for(int i=0;i<row;i++) {
    //     for(int j=0;j<column;j++) {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    //* exact row print
    // int e;
    // scanf("%d", &e);
    // for(int i=0;i<column;i++) {
    //     printf("%d ", a[e][i]);
    // }
    //* exact row print
    int e;
    scanf("%d", &e);
    for(int i=0;i<row;i++) {
        printf("%d\n", a[i][e]);
    }

    

    return 0;
}