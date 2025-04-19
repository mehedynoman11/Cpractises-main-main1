#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Student {
    public:
        string name;
        int cls;
        char section;
        int math_marks;
        int eng_marks;
        Student(string name, int cls, char section, int math_marks, int eng_marks) {
            this->name = name;
            this->cls = cls;
            this->section = section;
            this->math_marks = math_marks;
            this->eng_marks = eng_marks;
        }
};
int main() {
    int N;
    cin >> N;

    vector<Student> students; 
    for(int i=0;i<N;i++) {
        string name;
        int cls;
        char section;
        int math_marks, eng_marks;

        cin>>name>>cls>>section>>math_marks>>eng_marks;
        students.emplace_back(name,cls,section,math_marks,eng_marks);
    }


    for(int i=N-1;i>=0;i--) {
        cout<<students[i].name<<" "<<students[i].cls<<" "<<students[i].section<<" "<<students[i].math_marks<<" "<<students[i].eng_marks<<endl;
    }


    return 0;
}