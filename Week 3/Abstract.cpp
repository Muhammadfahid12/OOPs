#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void sound() = 0;

	Animal()
	{
		cout << "Parent class";
	}
};
class Dog : public Animal
{
public:
	Dog()
	{
		cout << "Child Class";
	}
 
	void sound()
	{
		cout << "Bark" << endl;
	}
};
int main()
{

	Dog obj;
	return 0;
}