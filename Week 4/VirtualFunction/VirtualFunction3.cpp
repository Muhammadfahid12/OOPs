/*
The important thing to note here is B::fun() is virtual even if we have not uses virtual keyword with it.
When a class has a virtual function, functions with same signature in all descendant classes automatically become virtual.
We don't need to use virtual keyword in declaration of fun() in B and C. They are anyways virtual.*/

#include <iostream>
using namespace std;

class A
{
public:
    virtual void fun() { cout << "A::fun() "; }
};

class B : public A
{
public:
    void fun() { cout << "B::fun() "; }
};

class C : public B
{
public:
    void fun() { cout << "C::fun() "; }
};

int main()
{
    B *bp = new C;
    bp->fun();
    return 0;
}