#include <iostream>
#include <algorithm>

using namespace std;
class Student {
    public:
        string name;
        int roll;
        int mark;
};
bool cmp(Student a, Student b) {
    if (a.mark < b.mark) return true;
    else return false;
}

int main() {
    Student a[5];

    for(int i=0;i<5;i++) {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].mark;
        cin.ignore();
    }

    //* Sort Function
    sort(a, a+3, cmp);

    // for(int i=0;i<3;i++) {
    //     cout << a[i].name << " " <<
    //     a[i].roll << " " << a[i].mark << endl;
    // }

    for(int i=0;i<3;i++) {
        cout << a[i].name << " " << a[i].roll <<
        " " << a[i].mark << endl;
    }
    
    return 0;
}