#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    int marks;

    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
bool cmp(Student a, Student b)
{
    if (a.marks != b.marks)
        return a.marks > b.marks;
    return a.roll < b.roll;
}

int main()
{
    int N;
    cin >> N;

    if (N <= 0) {
        cout << "Invalid" << endl;
        return 0;
    }

    vector<Student> students;

    for(int i=0;i<N;i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        students.emplace_back(name, roll, marks);
    }

    sort(students.begin(), students.end(), cmp);

    for(const auto &student : students) {
        cout << student.name << " " << student.roll << " " <<
        student.marks << endl;
    }
}