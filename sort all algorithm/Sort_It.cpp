#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Student {
    public:
        string name;
        int cls;
        char section;
        int id;
        int math_marks;
        int eng_marks;
        Student (string name, int cls, char section, int id, int math_marks, int eng_marks) {
            this->name = name;
            this->cls = cls;
            this->section = section;
            this->id = id;
            this->math_marks = math_marks;
            this->eng_marks = eng_marks;
        }

        int total_marks() const {
            return math_marks + eng_marks;
        }
};
bool compare(Student &a, Student &b) {
    if (a.total_marks() != b.total_marks())
        return a.total_marks() > b.total_marks();
    return a.id < b.id;
    
}

int main() {
    int N;
    cin >> N;

    vector<Student> students;

    for(int i=0;i<N;i++) {
        string name;
        int cls;
        char section;
        int id;
        int math_marks, eng_marks;

        cin>>name>>cls>>section>>id>>math_marks>>eng_marks;
        students.emplace_back(name,cls,section,id,math_marks,eng_marks);
    }

    sort(students.begin(), students.end(), compare);

    for(int i=0;i<N;i++) {
        cout<<students[i].name<<" "<<students[i].cls<<" "<<students[i].section<<" "<<students[i].id<<" "<<students[i].math_marks<<" "<<students[i].eng_marks<<endl;
    }


    return 0;
}