// constructor produce by defualt called when object is created
// all methods in the oop should be public;

#include <iostream>
using namespace std;

class Employee
{

private:
    string name;
    int age;
    string designation;

public:
    Employee()
    {
        cout << "Hi there from constructor function\n";
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setDesignation(string desig)
    {
        this->designation = desig;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    string getDesignation()
    {
        return designation;
    }
};

int main()
{
    Employee obj;

    obj.setName("Fahid Farooq");
    obj.setAge(23);
    obj.setDesignation("Scientist");

    string name, designation;
    int age;

    name = obj.getName();
    age = obj.getAge();
    designation = obj.getDesignation();

    cout << name << endl;
    cout << age << endl;
    cout << designation << endl;

    return 0;
}