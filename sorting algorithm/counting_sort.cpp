#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int maxElement = a[0];
    for(int i=0;i<n;i++) {
        if(a[i] > maxElement) {
            maxElement = a[i];
        }
    }

    vector<int> count(maxElement+1,0);

    for(int i=0;i<n;i++) {
        count[a[i]]++;
    }

    for(int i=1;i<=maxElement;i++) {
        count[i] = count[i] + count[i-1];
    }
    
    vector<int> output(n);
    for(int i=n-1;i>=0;i--) {
        output[count[a[i]] - 1] = a[i];
        count[a[i]]--;
    }


    for(int i=0;i<n;i++) {
        a[i] = output[i];
        cout<<a[i]<<" ";
    }

    return 0;
}