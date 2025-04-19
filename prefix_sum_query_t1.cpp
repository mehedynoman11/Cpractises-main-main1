#include <iostream>
using namespace std;
int main() {
    int n, q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int prefix[n];
    prefix[0] = a[0];
    for(int i=1;i<n;i++) {
        prefix[i] = a[i] + prefix[i-1];
        // cout<<prefix[i]<<" ";
    }
    while(q--) {
        int l, r;
        cin>>l>>r;
        l--;
        r--;
        int sum;
        if (l == 0) sum = prefix[r];
        else sum = prefix[r] - prefix[l-1];
        cout<<sum<<endl;
    }


    return 0;
}