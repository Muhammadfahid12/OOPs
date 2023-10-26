#include <iostream>
using namespace std;


class Fruit
{
    protected:
    int totalFruits = 100;
    
};
class Apple:public Fruit
{
    int apple;
    public:
    int noOfApple(int x)
    {
        apple = totalFruits - x;
        return apple;
    }
};
class Orange:public Fruit
{
    int orng;
    public:
    int noOfOrng(int u)
    {
        orng = totalFruits - u;
        return orng;
    }
};

int main()
{
    Orange orng;
    cout << orng.noOfOrng(20);
}
