#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int k=1;
    int s=n-1;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=s;j++) {
            cout<<" ";
        }
        for(int j=1;j<=k;j++) {
            cout<<"*";
        }
        k+=2;
        s--;
        cout<<endl;
    }

    return 0;
}