#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q; //* read number of arrays and quaries

    vector<vector<int>> arrays(n); 

    for(int i=0;i<n;i++) {
        int k;
        cin >> k; //* read the number of elements in the current array
        arrays[i].resize(k); //* resize to fit k elements
        
        for(int j=0;j<k;j++) {
            cin >> arrays[i][j]; //* read the elements
        }
    }

    for(int i=0;i<q;i++) {
        int arrayIndex, elementIndex;
        cin >> arrayIndex >> elementIndex;
        cout << arrays[arrayIndex][elementIndex] << endl;
    }




    return 0;
}