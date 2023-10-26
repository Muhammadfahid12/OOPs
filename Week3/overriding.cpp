// difference between overloading and overriding in paper point of view
/*override fuction is one in which there is a same function in both base and derived class and when
derived class object with that function is called ,derived class function will work,not base class.
In order to get base class function we will use :: (scope resolution operator)
*/
#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:

    void setName()
    {
        cout << "I am SetName Function from parent class"<<endl;
    }
};
class Child:public Person
{

public:
        string setName()
        {
            cout <<"I am setName Function from Child Class"<<endl;
            return "A";
        }

};

int main()
{
    Child fahid;
    fahid.setName();
    fahid.Person::setName();
}