#include <iostream>
using namespace std;
int power(int x, int i){
    int result = 1;
    for(int j=0;j<i;j++) {
        result *= x;
    }
    return result;
}
int calculateSum(int x, int n) {
    int sum = 0;
    for(int i=1;i<=n;i+=2) {
        sum += power(x, i);
    }
    return sum;
}
int main() {
    int X, N;
    cin >> X >> N;
    cout << calculateSum(X, N);

    return 0;
}