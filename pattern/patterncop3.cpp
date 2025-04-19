#include <iostream>
using namespace std;
int main() {
    int n,s,k;
    cin>>n;
    s=n-1;
    k=1;
    for(int i=1;i<=(n*2)-1;i++) {
        for(int j=1;j<s;j++) {
            cout<<" ";
        }
        for(int j=1;j<=k;j++) {
            cout<<"*";
        }
        if (i < n-1) {
            k+=2;
            s--;
        } else {
            s++;
            k-=2;
        }
        cout<<endl;
    }

    return 0;
}