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

Students punction() {
    char name[100] = "Mahedy Hasan Noman";
    Students Noman(name, 142304, 13, 'B');
    return Noman;
}

int main() {
    Students Noman = punction();

    cout << Noman.name << endl;
    cout << Noman.roll << endl;
    cout << Noman.cls << endl;
    cout << Noman.section << endl;

    // Students Callin("Callin Joss", 23, 12, 'D');
    // Students Rohim("Rohim Khan", 45, 10, 'B');

    return 0;
}