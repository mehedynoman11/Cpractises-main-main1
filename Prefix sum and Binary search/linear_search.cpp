#include <iostream>
using namespace std;
int linear_search(int *a, int n, int key) {
    for(int i=0;i<n;i++) {
        if(a[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int key;
    cin>>key;

    int result = linear_search(a,n,key);
    if (result == -1) {
        cout<<"Key not found"<<endl;
    } else {
        cout<<"Key found at index: "<< result<<endl;
    }

    return 0;
}