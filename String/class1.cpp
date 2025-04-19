#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;
        string location;
        Person (string name, int age, string location)
        {
            this->name=name;
            this->age=age;
            this->location=location;
        }
};

int main() {
    Person* Rohim = new Person("Rohim Molla", 23, "Dhaka");
    Person* Korim = new Person("Korim Mahadi", 25, "Foridpur");

    *Rohim = *Korim;

    delete Korim;
    cout << Rohim->name << endl;
    cout << Rohim->age << endl;
    cout << Rohim->location << endl;

    return 0;
}