// #include <stdio.h>

// int main() {
//     // Write Your Code Here
//     int arr[4] = {1, 2, 3, 4};
//     printf("%d\n", *arr);

//     return 0;
// }

#include <stdio.h>

int main() {
    // Write Your Code Here
    int arr[4] = {1, 2, 3, 4};
    int *p;
    p = arr + 3;
    *p = 5;
    printf("%d\n", arr[3]);
    return 0;
}