// #include <stdio.h>

// int boltu(int x, int y) {
//     scanf("%d %d",x,y);
//     if(x % y == 0){
//         printf("EVEN\n");
//     } else {
//         printf("NOT EVEN\n"); 
//     }
// }

// int main() {
//     boltu(10, 12);
//     return 0;
// }


// #include <stdio.h>

// void boltu(int x, int y) {
    
//     if(x % y == 0){
//         printf("EVEN\n");
//     } else {
//         printf("NOT EVEN\n"); 
//     }
// }

// int main() {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     boltu(x, y);
//     return 0;
// }

#include <stdio.h>

void boltu() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x % y == 0){
        printf("EVEN\n");
    } else {
        printf("NOT EVEN\n"); 
    }
}

int main() {
    
    boltu();
    return 0;
}
