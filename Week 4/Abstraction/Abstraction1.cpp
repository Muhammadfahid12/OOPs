#include <iostream>
using namespace std;

class Parent
{
public:
    void virtual show() = 0; // setting it to zero has make it pure virtual function
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "This is Child Of Abstract Class";
    }
};

int main()
{
    Child G;
    G.show();

}
