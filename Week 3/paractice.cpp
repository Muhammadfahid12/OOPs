#include <iostream>
using namespace std;

class A
{
    int a;
    int b;
    void zabra()
    {
        cout << "I am private function from A";
    }
    friend class B;
};
class B
{
public:
    void fun(A obj)
    {
        obj.a = 50;
        obj.b = 70;
        cout << "a: " << obj.a << " b: " << obj.b << endl;
        obj.zabra();
    }
};

int main()
{
    A obj1;
    B obj2;
    obj2.fun(obj1);
    return 0;
}