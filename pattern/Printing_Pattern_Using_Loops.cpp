#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, start, end, size, num;
    cin>>n;
    size = (2*n) - 1;
    start = 0;
    end = size - 1;
    num = n;

    int a[size][size];

    while (num > 0) {
        for(int i=start;i<=end;i++) {
            for(int j=start;j<=end;j++) {
                if (i == start || i == end || j == start || j == end) {
                    a[i][j] = num;
                }
            }
        }
        start++;
        end--;
        num--;
    }

    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}