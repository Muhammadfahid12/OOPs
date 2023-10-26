#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test()
    {
        a = 10;
        b = 50;
    }
    friend class Random;
};
class Random
{
public:
    void add(Test obj)
    {
        cout << obj.a << endl
             << obj.b << endl;
    }
};
int main()
{
    Test abc;
    Random xyz;
    xyz.add(abc);

    return 0;
}
