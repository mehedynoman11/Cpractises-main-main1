#include <iostream>
#include <string.h>
using namespace std;

class Students 
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

    Students (char *nm, int r, int c, char s) {
        cout << "Printed Automatically" << endl;
        strcpy(name, nm);
        roll = r;
        cls = c;
        section = s;

    }
};

int main() {
    Students Callin("Callin Joss", 23, 12, 'D');
    Students Rohim("Rohim Khan", 45, 10, 'B');

    cout << Callin.name << endl;
    cout << Callin.roll << endl;
    cout << Callin.cls << endl;
    cout << endl;
    cout << Rohim.name << endl;
    cout << Rohim.roll << endl;
    cout << Rohim.cls << endl;
    return 0;
}