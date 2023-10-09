//use of Protected Inheritance;
#include <iostream>
using namespace std;

class Integer
{
    int x;

public:
    Integer()
    {
        x = 5;
    }
    void showNum(int x)
    {
        this->x = x;
        cout << x;
    }
};
class WholeNum : protected Integer
{
public:
    void displayNum()
    {
        showNum(55);
    }
};

int main()
{
    WholeNum test;
    test.displayNum();
    return 0;
}