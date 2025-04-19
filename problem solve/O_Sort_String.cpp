#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string S;
    cin.ignore();

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (S[i] > S[j])
            {
                char tmp = S[i];
                S[i] = S[j];
                S[j] = tmp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << S[i];
    }

    return 0;
}