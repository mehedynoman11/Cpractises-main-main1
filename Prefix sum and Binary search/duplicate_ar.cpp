#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    bool found = false;
    sort(a, a+n, greater<int>());
    for(int i=1;i<n;i++) {
        if (a[i] == a[i-1]) {
            found = true;
        }
    }
    if (found == true) {
        cout<<"Duplicate found"<<endl;
    } else {
        cout<<"Duplicate not found"<<endl;
    }

    return 0;
}