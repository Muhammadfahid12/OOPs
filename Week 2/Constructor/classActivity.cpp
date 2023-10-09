#include <iostream>
using namespace std;

class Integer
{
    int x;

public:
    void setNum(int num);
    int getNum();
};

void Integer::setNum(int y)
{
    x = y;
};

int Integer::getNum()
{
    return x;
};
int main()
{
    Integer test;
    test.setNum(44);
    int result = test.getNum();
    cout << result;
    return 0;
}
