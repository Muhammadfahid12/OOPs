#include <iostream>
using namespace std;

class Base
{
public:
    void displayName()
    {
        cout << "I am base class function" << endl;
    }
};

class Child : public Base
{
public:
    void displayName()
    {
        cout << "I am child class function" << endl;
    }
};

int main()
{
    Base *ptr;
    // ptr->displayName();

    Child ptr1;
    // ptr1.displayName();

    ptr = &ptr1;

    ptr->displayName();
}