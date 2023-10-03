#include <iostream>
using namespace std;

class Student
{
public:
    string name = "Fahid";

    void setName(string n)
    {
        name = n;
        
    }
    void getName()
    {
        cout <<name;
    }
};
int main()
{
    Student s;
    s.setName("HI");
    s.getName();
}
