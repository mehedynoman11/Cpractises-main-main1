#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int countWithNextDuplicateNum(vector<int> &arr) {
    unordered_set<int> elements(arr.begin(), arr.end());
    int count = 0;

    for(int num: arr) {
        if (elements.find(num+1) != elements.end()) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int result = countWithNextDuplicateNum(arr);
    cout << result << endl;

    return 0;
}