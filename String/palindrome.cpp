#include <iostream>
#include <string.h>

using namespace std;
int main() {
    char a[1001], b[1001];
    cin >> a;
    strcpy(b, a);
    int i=0, j=strlen(b) - 1;
    while (i < j) {
        char tmp = b[i];
        b[i] = b[j];
        b[j] = tmp;
        i++;
        j--;
    }
    cout << b;

    return 0;
}