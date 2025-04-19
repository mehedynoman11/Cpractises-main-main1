#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        vector <int> a(n);
        int count_even = 0, count_odd = 0;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                count_even++;
            } else {
                count_odd++;
            }
        }

        if (abs(count_even - count_odd) % 2 != 0) {
            cout << -1 << endl; //* If its impossible
        } else {
            cout << abs(count_even - count_odd) / 2 << endl; 
            //* minimum operation
        }

    }

    return 0;
}