#include <iostream>
#include <string.h>
using namespace std;

//? Constructor

class Student
{
    public:
        char name[100];
        int roll;
        char section;
        int math_marks;
        int cls;
    Student (char *nm, int r, char s, int m, int c) {
        cout << "Printed Automatically" << endl;
        strcpy(name, nm);
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }

    int getMathMarks() const {
        return math_marks;
    }

    string getName() const {
        return name;
    }
};

int main()
{
    Student Nahid("Gabru Nahid", 164127, 'V', 150, 15);
    Student Karim("Karim Molla", 163126, 'G', 60, 14);
    Student Rahim("Rahim Molla", 341123, 'D', 90, 10);

    Student highest = Nahid;
    if (Karim.getMathMarks() > highest.getMathMarks()) {
        highest = Karim;
    }
    if (Rahim.getMathMarks() > highest.getMathMarks()) {
        highest = Rahim;
    }

    cout << "The Highest Score is : " << highest.getName() << endl;
    return 0;
}