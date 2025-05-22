// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     int o = 23;
//     cout<<n+o<<endl;

//     return 0;
// }


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;

    // Input size of array
    cin >> n;
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, arr + n);

    // Input number of queries
    cin >> q;

    while (q--) {
        int x;
        cin >> x; // Element to search for
        int l = 0, r = n - 1;
        bool found = false;

        // Binary Search
        while (l <= r) {
            int mid_index = (l + r) / 2; // Proper midpoint calculation
            if (arr[mid_index] == x) {
                found = true;
                break;
            } else if (arr[mid_index] < x) {
                l = mid_index + 1;
            } else {
                r = mid_index - 1;
            }
        }

        // Output result
        if (found) {
            cout << "Found" << endl;
        } else {
            cout << "Not Found" << endl;
        }
    }

    return 0;
}


