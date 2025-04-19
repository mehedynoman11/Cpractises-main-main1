#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        float height;
        int age;
    Person(string n, float h, int a) {
        name = n;
        height = h;
        age = a;
    }
};

int main() {
    Person* person1 = new Person("John Doe", 1.75, 25);

    cout << person1->name << endl;
    cout << person1->height << endl;
    cout << person1->age << endl;

    delete person1;

    return 0;
}