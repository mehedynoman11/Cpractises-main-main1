#include <iostream>
using namespace std;
class ClsObjectSort {
    public:
        char C;
        int cnt;
};
int main() {
    int n;
    cin >> n;

    ClsObjectSort frq[26];
    for(int i=0;i<26;i++) {
        frq[i].C =(i + 'a');
        frq[i].cnt = 0;
    }

    for(int i=0;i<n;i++) {
        char c;
        cin >> c;
        frq[c-'a'].cnt++;
    }

    for(int i=0;i<26;i++) {
        cout << frq[i].C << " " << frq[i].cnt << endl;
    }
    return 0;
}