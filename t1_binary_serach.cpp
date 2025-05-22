#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr , arr+n);
    while(q--) {
        int x;
        cin>>x;
        int l=0, r=n-1;
        bool found = false;
        while(l<=r) {
            int mid_index = (l+r)/2;
            if (arr[mid_index] == x) {
                found = true;
                break;
            } else if (arr[mid_index] < x) {
                l = mid_index + 1;
            } else {
                r = mid_index - 1;
            }
        }
        if (found) {
            cout<<"Found"<<endl;
        } else {
            cout<<"Not Found"<<endl;
        }
    }
    return 0;
}