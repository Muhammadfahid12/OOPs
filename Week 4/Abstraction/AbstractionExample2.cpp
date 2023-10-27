#include <iostream>
using namespace std;

class Vehicle
{
    int engine;

public:
    void setEngine(int eng)
    {
        engine = eng;
    }

    int getEngine()
    {
        return engine;
    }

    virtual void start() = 0;
};

class Car : public Vehicle
{
    string transmission;

public:
    void start()
    {
        cout << "Start from child class Car";
    }
    void setTransmission(string trans)
    {
        transmission = trans;
    }
    string getTransmission()
    {
        return transmission;
    }
};

int main()
{
    Car audi;
    audi.setEngine(22);
    // cout <<audi.getEngine();
    audi.setTransmission("EBC");
    cout << audi.getTransmission();

    Vehicle *alpha;
    alpha = &audi;
    alpha->start();

    return 0;
}