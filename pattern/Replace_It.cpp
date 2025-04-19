#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;

    string replaceWord = "$";

    while (t--)
    {
        string s, x;
        cin >> s >> x;

        size_t pos = s.find(x);

        while (pos != string::npos)
        {
            s.replace(pos, x.size(), replaceWord);

            pos = s.find(x, pos + replaceWord.size());
        }
        cout << s << endl;
    }

    return 0;
}