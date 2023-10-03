//use of this keyword;
//this refers to the current object in the memory;
//it is used when two a variable and parameter should have same name;

#include <iostream>
using namespace std;

class Empl
{
public:
    string name;
    string address;

    void setName(string name,string adres)
    {
        this->name = name;
        address= adres;
        cout << name << endl;
        cout <<address<<endl;
    }
};
int main()
{
    Empl person;
    person.setName("Muhammad Fahid Farooq","Faisalabad");
    // cout << &person;
}
