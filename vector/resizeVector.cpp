#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Vector resized to 3
    v.resize(3);
    v.resize(7);

    for (auto i: v)
      cout << i << " ";
    return 0;
}