#include <iostream>
#include <math.h>
using namespace std;

void update(int *a,int *b) {
    int sum = *a + *b;
    int abs_def = abs(*a - *b);
    *a = sum;
    *b = abs_def;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> a >> b;
    update(pa, pb);
    cout << a << endl << b;

    return 0;
}