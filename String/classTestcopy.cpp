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

     int getAge() const {
        return age;
    }

    string getName() const {
        return name;
    }
};

int main() {
    Person person1("Alice", 1.65, 28);
    Person person2("Bob", 1.80, 32);

    if (person1.getAge() > person2.getAge()) {
        cout << person1.getName() << " is older." << endl;
    } else if (person1.getAge() < person2.getAge()) {
        cout << person2.getName() << " is older." << endl;
    } else {
        cout << "Both are of the same age." << endl;
    }

    return 0;
}