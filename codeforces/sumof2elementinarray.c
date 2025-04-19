#include <stdio.h>

int main() {
    // Write Your Code Here
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d", &A[i]);
    }
    int X;
    scanf("%d", &X);

    int flag = 0;

    for(int i=0;i<N-1;i++) {
        for(int j=i+1;j<N;j++) {
            // printf("%d %d\n",i,j);
            if (A[i] + A[j] == X) {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("No\n");
    } else {
        printf("Yes\n");
    }
    

    return 0;
}