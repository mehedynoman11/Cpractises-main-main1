#include <stdio.h>

int main() {
    // Write Your Code Here
    int n, m, x;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d", &x);
    int found = 0;

    for(int i=0;i<n && !found;i++) {
        for(int j=0;j<m;j++){
            if (a[i][j] == x) {
                found = 1;
                break;
            }
        }
    }

    if (found)
    {
        printf("will not take number\n");
    } else {
        printf("will take number\n");

    }
    

    return 0;
}