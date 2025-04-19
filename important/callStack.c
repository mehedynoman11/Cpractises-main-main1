#include <stdio.h>

int function_one() {
    printf("Function 1 Shuru\n");
    printf("Function 1 Shes\n");
}
int function_two() {
    printf("Function 2 Shuru\n");
    function_one();
    printf("Function 2 Shes\n");
}
int main() {
    printf("Function main Shuru\n");
    function_two();
    printf("Function main Shes\n");

    return 0;
}