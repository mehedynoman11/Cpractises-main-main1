#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<char> S(N);

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    sort(S.begin(), S.end());

    for (int i = 0; i < N; i++)
    {
        cout << S[i];
    }

    return 0;
}