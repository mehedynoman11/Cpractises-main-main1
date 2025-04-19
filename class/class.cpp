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
};

int main() {
    Students Justin;
    char nm[100] = "Justin";
    strcpy(Justin.name, nm);
    Justin.roll = 46;
    Justin.cls = 12;
    Justin.section = 'A';

    cout << Justin.name << endl;
    cout << Justin.roll << endl;
    cout << Justin.cls << endl;
    return 0;
}