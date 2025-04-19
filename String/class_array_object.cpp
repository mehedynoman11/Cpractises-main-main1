#include <iostream>
using namespace std;
class Student {
    public:
        string name;
        int roll;
        int mark;
        // Student (string name, int roll, int mark) {
        //     this->name=name;
        //     this->roll=roll;
        //     this->mark=mark;
        // }
};

int main() {
    Student a[5];

    for(int i=0;i<5;i++) {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].mark;
        cin.ignore();
    }

    for(int i=0;i<3;i++) {
        cout << a[i].name << " " <<
        a[i].roll << " " << a[i].mark << endl;
    }

    return 0;
}