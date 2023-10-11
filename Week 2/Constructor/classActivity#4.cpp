// using copying constructor

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    Person(Person &data)
    {
        name = data.name;
        age = data.age;
    }

    void setName(string name)
    {
        this->name = name;
    }
    void getName(){
        cout << name << endl;
    }
    void getAge(){
        cout << age << endl;
    }
};
int main()
{
    Person fgf("Fahid", 22);

    Person asd(fgf);
    asd.setName("Zawar");
    asd.getName();
    // asd.getAge();
}