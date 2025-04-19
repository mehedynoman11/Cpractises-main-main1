#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    char S[N + 1];
    cin.ignore();

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    sort(S, S + N);

    for (int i = 0; i < N; i++)
    {
        cout << S[i];
    }

    return 0;
}