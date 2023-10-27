#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void show()
    {
        cout << "Parent Class" << endl;
    }
};
class Child : public Parent
{
public:
    void show()
    {
        cout << "Child Class" << endl;
    }
};

int main()
{
    Child obj2;
    Parent obj1;

    Parent *ptr;
    ptr = &obj2;
    ptr->show();

    // ptr = &obj1;
    // ptr->show();
}