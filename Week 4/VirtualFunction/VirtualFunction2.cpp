/**
 Yes, you're correct. If a class has a virtual function, it will be overridden at runtime only if we create a pointer or a reference to the base class that actually points or refers to an object of the derived class.This is known as dynamic binding or late binding.
If you create a regular object (not a pointer or reference), the function call will be resolved at compile time, not at runtime. This is known as static binding.
*/

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
class Child : protected Parent
{
public:
    virtual void show()
    {
        cout << "Child Class" << endl;
    }
};

int main()
{
    Parent obj1;
    Child obj2;

    Parent *ptr1;
    ptr1 = &obj1;
    ptr1->show();
    Child *ptr2;

    // ptr1 = &obj2;
    // ptr1->show();

    // ptr2 = &obj2;
    // ptr2->show();

    return 0;
}