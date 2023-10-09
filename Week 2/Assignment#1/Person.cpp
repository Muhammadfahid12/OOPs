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


    Person P = Person("Fahid", "Male", 23);

    P.getPersonDetails();


    return 0;
}

//constructor cannot be used to initilize the values .
//Constructors in object-oriented programming languages, including C++, are primarily intended for initializing the initial state of an object, not for directly overwriting or modifying the values of data members after the object has been created. Constructors are called during the object's creation and are responsible for setting up its initial attributes to valid and meaningful values.