#include <iostream>
#include <string.h>
using namespace std;

class Cricketer
{
    public:
        int jersey_no;
        string country;

    // Cricketer (int jersey, char *cn) {
    //     jersey_no = jersey;
    //     strcpy(country, cn);
    // }
    
};

int main() {
    // char country[100] = "India";
    Cricketer* Dhoni = new Cricketer();
    Dhoni->jersey_no = 19;
    Dhoni->country = "India";

    Cricketer* Kohli = new Cricketer();

    Kohli->jersey_no = Dhoni->jersey_no;
    Kohli->country = Dhoni->country;

    delete Dhoni;

    cout << Kohli->jersey_no << endl;
    cout << Kohli->country << endl;

    return 0;
}