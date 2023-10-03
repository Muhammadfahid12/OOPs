#include <iostream>
using namespace std;

class AreaofCircle
{
public:
    int radius, area;
    void setRadius(int val)
    {
        radius = val;
    };
    void getArea()
    {
        area = 3.14 * radius * radius;
    }
};
int main()
{
    AreaofCircle calculateArea;
    calculateArea.setRadius(3);
    calculateArea.getArea();
    cout << calculateArea.area;
}
