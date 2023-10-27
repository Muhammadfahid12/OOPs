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
    Child obj1;
    Parent obj2;

    Parent *ptr;
    ptr = &obj1;
    ptr->show();

    ptr = &obj2;
    ptr->show();
}