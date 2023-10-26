#include <iostream>
using namespace std;

class Mammles
{
public:
 Mammles()
 {
    cout << " I am Mammle"<<endl;
 }
};

class MarineAnimals
{
public:
    MarineAnimals()
    {
        cout << " I am MarineAnimal"<<endl;
    }

};

class BlueWhale:public Mammles,public MarineAnimals
{
public:
BlueWhale()
{
    cout << "I am inherit from both ";
}

};

int main(){

    BlueWhale fish;

    return 0;
}