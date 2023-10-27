// Destructer can never be paramterized and also never return anything
#include <iostream>
using namespace std;

class Food
{
    int price;
    string category;
    string name;

public:
    Food()
    {
        cout << "I am Constructor From Parent Food" << endl;
    }
    Food(string name)
    {
        this->name = name;
        cout << "I am parameterized Constructor From Parent Food" << endl;
    }
    string getName()
    {
        return "Food Parent\n";
    }
    ~Food()
    {
        cout << "I am Destructer From Parent Food" << endl;
    }
};

class FastFood : public Food
{
    int items;
    bool anyDeal;

public:
    FastFood()
    {
        items = 5;
        anyDeal = false;
        cout << "I am construtor From Child FastFood" << endl;
    }
    ~FastFood()
    {
        cout << "I am Destructer From Child FastFood" << endl;
    }
};

class Burger : public FastFood
{
    int drinkPrice;

public:
    Burger();
    Burger(int price)
    {
        drinkPrice = price;
        cout << "price" << drinkPrice;
        cout << "I am Constructor From grandchild Burger" << endl;
        cout << getName();
    }
    ~Burger()
    {
        cout << "I am Destructer From grandchild Burger" << endl;
    }
};

int main()
{
    FastFood f;
    return 0;
}