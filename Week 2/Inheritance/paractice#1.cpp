#include <iostream>
using namespace std;

class Student
{
    string name;
    string className;
    int rollNumber;
    char grade;

public:
    Student(string name, string className, int rollNumber, char grade)
    {
        this->name = name;
        this->className = className;
        this->rollNumber = rollNumber;
        this->grade = grade;
    }

    void displayInfo()
    {
        cout << "name : " << name << endl;
        cout << "Class : " << className << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Grade : " << grade << endl;
    }
};

int main()
{
    string name;
    string className;
    int RollNumber;
    char grade;

    cout << "Enter your Name Number " << endl;
    getline(cin, name);

    cout << "Enter your Class " << endl;
    getline(cin, className);

    cout << "Enter your roll number" << endl;
    cin >> RollNumber;

    cout << "Enter your grade " << endl;
    cin >> grade;

    Student std(name, className, RollNumber, grade);
    std.displayInfo();

    return 0;
}