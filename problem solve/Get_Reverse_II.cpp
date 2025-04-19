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
        Student(string name, int cls, char section, int id) {
            this->name = name;
            this->cls = cls;
            this->section = section;
            this->id = id;
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
        int id;

        cin>>name>>cls>>section>>id;
        students.emplace_back(name,cls,section,id);
    }

    for (int i = 0; i < N; i++) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " ";
        cout << students[N - i - 1].id << endl; 
    }

    return 0;
}