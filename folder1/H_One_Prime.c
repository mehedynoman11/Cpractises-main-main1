#include <stdio.h>

int main() {
    // Write Your Code Here
    int N, flag = 0;
    scanf("%d", &N);

    if(N == 0 || N == 1) {
        flag = 1; //* Not a prime number
    } else {
        for(int i=2;i<N/2;i++) {
            if(N % i == 0) {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    

    return 0;
}