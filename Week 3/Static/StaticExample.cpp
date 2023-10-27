#include <iostream>
#include <conio.h>
#include <string>
//static keyword will reserve one place in memory and only keeps changes,no new memeory allocation takes place;
using namespace std;

class Test
{
public:
    static int count; // using static means, this variable will be shared with all the objects of this class.
                      // do not intialize the value of data member.

    Test()
    {
        count += 1;
    }

    void showCount()
    {
        cout << count;
    }
};

int Test ::count = 0; // Intializing the value of a shared variable.

int main()
{
    Test t1;
    t1.showCount(); // this will show the value of the shared variable. The count will be 1 since only one object is created.
    cout << endl;

    Test t2;
    t2.showCount(); // this will show the value of the shared variable. The count will be 2 since two objects are created at this
                    // level.
    cout << endl;

    Test t3;
    t3.showCount(); // this will show the value of the shared variable. The count will be 3 since three objects are created at this
                    // level.
    cout << endl;

    t1.showCount(); // this will show the value of the shared variable. The count will be 3 since three objects are created at this

    cout << endl;
    // level.
    t2.showCount(); // this will show the value of the shared variable. The count will be 3 since three objects are created at this

    cout << endl;
    // level.
    t3.showCount(); // this will show the value of the shared variable. The count will be 3 since three objects are created at this

    // level.

    cout << endl;

    t1.count = 100; // we can intialize the value and overwrite.
    t3.showCount(); // this will be showing the new value now.

    cout << endl;

    Test t4;
    t3.showCount(); // now, the updated count will start from 100 and will be 101.

    cout << endl;

    Test t5;

    t1.showCount();
    Test t6;
    Test t7;
    Test t8;
    Test t9;
    cout << endl;
    t1.showCount();
    return 0;
}
