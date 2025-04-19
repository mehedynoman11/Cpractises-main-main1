#include <stdio.h>

int main() {
    // Write Your Code Here
    double x, p;
    scanf("%lf %lf", &x, &p);

    double original_price = p / (1 - x/100);
    printf("%.2lf\n", original_price);

    return 0;
}