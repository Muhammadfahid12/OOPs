#include <iostream>
using namespace std;

//in child class,,constructor may or may not be parameterized but parent non-parametrized should be present,if not than follow procedure at line 18

class Base
{
public:
    Base(int n)
    {
        cout << "Base";
    }
   
};
class Derived : public Base
{
public:
    Derived(int n):Base(n)
    {
        cout << "Derived";
        cout <<n;
    }
};

int main()
{
    Derived d(15);
    return 0;
}