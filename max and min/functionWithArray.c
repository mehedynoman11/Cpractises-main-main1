#include <stdio.h>
// ** Array with function
void my_function(int Arr[], int N) {
    for(int i=0;i<N;i++) {
        printf("%d ", Arr[i]); 
    }
    printf("\n");
}

int main() {
    //todo: Write Your Code Here
    int arr[5] = {11, 22, 33, 44, 55};
    my_function(arr, 5);
    printf("%d \n", *(arr+3)); // ! pointer testing

    return 0;
}