// we can make more than one constructor;
// constructor is only used when new object is created;

#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    string CNIC;

public:
    Employee(string name, string CNIC)
    {
        this->name = name;
        this->CNIC = CNIC;
    }

    void getEmployee()
    {
        cout << name << endl;
        cout << CNIC << endl;
    }

    Employee(string name)
    {
        this->name = name;
    }
};

int main()
{
    Employee data("Fahid", "233223232232");
    data.getEmployee();
    Employee name("farooq");
    name.getEmployee();
    return 0;
}