#include <iostream>
using namespace std;

class ITM
{
    int students;

public:
    int noOfStudents(int x);
};

int ITM::noOfStudents(int x)
{
    students = x;
    return students;
}

int main()
{
    ITM data;
    int result = data.noOfStudents(40);
    cout << "No of students are : " << result << endl;
}