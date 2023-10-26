// difference between overloading and overriding in paper point of view

#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:

    void setName()
    {
        cout << "I am SetName Function from parent class";
    }
};
class Child:public Person
{

public:
        string setName()
        {
            cout <<"I am setName Function from Child Class";
            return "A";
        }

};

int main()
{
    Child fahid;
    fahid.setName();
}