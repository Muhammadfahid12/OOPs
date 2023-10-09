//usecase when the constructor specifier is private

//using constructor when specifier is private the object value cannot be created because constructor can not be accessed outside the function;


#include <iostream>
using namespace std;

class Person
{
public:
    string Name;
    string CNIC;
    string Gender;
    int Age;
    string Occupation;

    // default constructor
private:
    Person()
    {
    }

    // paramterised constuctor with all parameters

    Person(string Name, string CNIC, string Gender, int Age, string Occupation)
    {
        this->Name = Name;
        this->CNIC = CNIC;
        this->Gender = Gender;
        this->Age = Age;
        this->Occupation = Occupation;
    }
    //parameterisex constructor with selected parameters
    Person(string Name, string Gender, int Age)
    {
        CNIC = "-------------";
        Occupation = "unknown";
        this->Gender = Gender;
        this->Age = Age;
        this->Name = Name;
    }

    void getPersonDetails()
    {
        cout << Name << endl;
        cout << CNIC << endl;
        cout << Gender << endl;
        cout << Age << endl;
        cout << Occupation;
    }
};

int main()
{
    //calling default constructor object
    //Obseravtions:
    //Default vlaues are printed out

    Person getData;
    getData.getPersonDetails();


    // Person P = Person("Fahid", "Male", 23);
    // P.getPersonDetails();


    return 0;
}