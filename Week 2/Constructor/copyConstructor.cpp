// understanding copy constructor

#include <iostream>
using namespace std;

class Student
{
    string Name;
    int Age;
    char Grade;
    string Gender;
    string Address;

public:
    Student(string name, int age, char grade)
    {
        Name = name;
        Age = age;
        Grade = grade;
    }

    void update(const Student &data, string gender, string address)
    {
        Name = data.Name;
        Age = data.Age;
        Grade = data.Grade;
        Gender = gender;
        Address = address;
    }

    void display()
    {
        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
        cout << "Grade : " << Grade << endl;
        cout << "Gender : " << Gender << endl;
        cout << "Address : " << Address << endl;
    }
};

int main()
{
    Student std = Student("Fahid", 23, 'A');
    std.update(std, "male", "Lahore");
    std.display();
}