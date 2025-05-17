#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, q;
    cin>>n>>q;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    vector<int> prefix(n);
        prefix[0] = arr[0];
        for(int i=1;i<=n;i++) {
            prefix[i] = arr[i] + prefix[i-1];
            // cout<<prefix[i]<<" ";
        }
    while(q--) {
        int l,r;
        cin>>l>>r;
        int sum ;
        if (l == 0) prefix[r];
        else sum = prefix[r] - prefix[l-1];
        cout<<sum;
    }


    return 0;
}