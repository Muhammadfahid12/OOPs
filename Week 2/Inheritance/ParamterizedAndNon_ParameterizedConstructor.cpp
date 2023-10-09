//Paramterized and non_Parameterized Constructor in Inheritance
//by default a child class will call default constructor of the parent ,if it is not initilized it will cause logical error
//to call by parameterized constructor by default we will use syntax as we used in line 23, now only paremeterized constructor will be called , non-paramterized constructor will not be called in tis case

#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "This is default Constructor of the parent" << endl;
    }

    Parent(int x)
    {
        cout << "This is paramterized Parent constructor  "<<endl;
    }
};
class Child : public Parent
{
public:
    Child(int x) : Parent(x)
    {

        cout << "This is Child";
    }
};

int main()
{
    // Parent obj(6);
    Child std(6);
    return 0;
}