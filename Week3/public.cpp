#include <iostream>
using namespace std;

class Parent
{
public:
    void getName()
    {
        cout << "I am getName Function";
    }
};

class Child : protected Parent
// now the functions in the Parent have become protected ,it means only child class of Parent if public can access getName().that is why error is in the line 27
{
};
class GrandChild : public Child
{
public:
    GrandChild()
    {
        getName();
    }
};

int main()
{
    GrandChild c;
    c.getName();
    return 0;
}