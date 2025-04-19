#include <iostream>
using namespace std;
int main()
{

    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    if (Q == '=')
    {
        if (S == '+' && A + B == C ||
            S == '-' && A - B == C ||
            S == '*' && A * B == C)
        {
            cout << "Yes";
        }
        else
        {
            if (S == '+')
            {
                cout << A + B << endl;
            }
            else if (S == '-')
            {
                cout << A - B << endl;
            }
            else if (S == '*')
            {
                cout << A * B << endl;
            }
        }
    }

    return 0;
}