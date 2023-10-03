// syntax of classes
// by default attributes are private and methods are private;

#include <iostream>
using namespace std;

class Student
{

public:
    int id;
    string name;
    string address;

    // use of methods
    void attendance()
    {
        cout << "\nI am present";
    }

    void details(int x, string name21, string address23)
    {
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "Address :" << address << endl;
    }
};

int main()
{

    Student student1;

    student1.id = 4;
    student1.name = "Muhammad Fahid";
    student1.address = "Lahore";
    student1.details(student1.id, student1.name, student1.address);
}
