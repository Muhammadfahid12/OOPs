// C++ program to demonstrate static
// variables inside a class

#include <iostream>
using namespace std;

class GfG
{
public:
    static int i;

    GfG(){
        // Do nothing
    };
    void increment()
    {
        i++;
    }
};

int GfG::i = 44;

int main()
{
    GfG obj;
    // prints value of i

    cout << "Before Increment " << obj.i << endl;

    obj.increment();

    cout << "After Increment " << obj.i << endl;

    GfG obj2;

    obj2.i;

    cout << "For second Object Before Increment " << obj.i << endl;

    obj2.increment();

    cout << "For second Object After Increment " << obj.i << endl;
}
