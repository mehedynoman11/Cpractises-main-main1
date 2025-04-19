#include <stdio.h>

int main() {
    // Write Your Code Here
    int N;
    scanf("%d", &N);

    int a[N][N];
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int x=0,y=0 ;
    for (int i = 0; i < N; i++)
    {
        x += a[i][i];
        y += a[i][N - 1 - i];
    }
    
    int abs_diff = abs(x - y);
    printf("%d\n", abs_diff);

    return 0;
}