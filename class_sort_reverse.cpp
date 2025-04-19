#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
class Student {
    public:
        string name;
        int roll;
        int marks;
};
int main() {
    int N;
    cin >> N;

    vector<Student> students(N);

    for(int i=0;i<N;i++) {
        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }

    for (int i = 0; i < N / 2; i++) {
        swap(students[i], students[N - i - 1]);
    }

    for(int i=0;i<N;i++) {
        cout << students[i].name << " " << students[i].roll <<  " " << students[i].marks << endl;
    }


    return 0;
}