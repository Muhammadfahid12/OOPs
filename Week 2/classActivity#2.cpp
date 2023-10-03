#include <iostream>
using namespace std;

class Data
{
public:
    string name;
    string CNIC;

    Data()
    {
        name = "Fahid Farooq";
        CNIC = "0000000000000";
    }

    void getData()
    {

        cout << name << endl;
        cout << CNIC << endl;
    }
};

int main()
{

    Data biodata;
    biodata.getData();
}
