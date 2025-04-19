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

    char name[100] = "Mahedy Hasan Noman";
    // Students Callin("Callin Joss", 23, 12, 'D');
    // Students Rohim("Rohim Khan", 45, 10, 'B');
    Students* Noman = new Students(name, 142304, 13, 'S');

    cout << Noman->name << endl;
    cout << (*Noman).roll << endl;

    return 0;
}