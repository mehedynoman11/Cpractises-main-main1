#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    // Input the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if the matrix is square
    if (row != col) {
        printf("Not Diagonal");
        return 0;
    }

    int flag = 1;

    // Check secondary diagonal matrix conditions
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i + j == row - 1) {
                if (a[i][j] == 0) {
                    flag = 0;
                    break;
                }
            } else if (a[i][j] != 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag) {
        printf("Secondary Diagonal");
    } else {
        printf("Not Diagonal");
    }

    return 0;
}
