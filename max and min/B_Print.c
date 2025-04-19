#include <stdio.h>

void one_to_n_number(int M) {
    // int number=0; 
    for(int i=1;i<=M;i++){
        printf("%d ",i);
    }
}

int main() {
    int N;
    scanf("%d",&N);
    one_to_n_number(N);
    
    return 0;
}