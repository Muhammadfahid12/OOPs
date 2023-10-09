#include <iostream>
using namespace std;

class Vehicle
{
    string breakType;
    int model;

protected:
    void setBreakType(string typeOfBreak)
    {
        breakType = typeOfBreak;
    }

    void setModel(int make)
    {
        model = make;
    }

    string getBreakType()
    {
        return breakType;
    }

    int getModel()
    {
        return model;
    }
};

// inheritance in vehicle

class Car : public Vehicle
{
    int price;
    int mileage;

public:
    void setPrice(int price)
    {
        this->price = price;
    }
    void setmileage(int mileage)
    {
        this->mileage = mileage;
    }

    void getCarInfo()
    {
        // cout << "Break type : " << getBreakType() << endl;
        // cout << "Car Model : " << getModel() << endl;
        cout << "Price : " << price << endl;
        cout << "Mileage : " << mileage << endl;
    }
};

int main()
{
    Car getCarData;
    // getCarData.setBreakType("ABS");
    // getCarData.setModel(2022);
    getCarData.setPrice(20000000);
    getCarData.setmileage(20);
    // now we have set all te desired values above;

    getCarData.getCarInfo();

    return 0;
}