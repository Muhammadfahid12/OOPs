
// A class containing a pure virtual function is called an abstract class.
// An abstract class can also have attributes and concrete functions but usually this is not the case.
// We cannot create an object of abstract class.
// We make abstract classes to inherit common functionalities to child classes.
// Concrete classes are those for which we can create objects.

#include <iostream>
#include <conio.h>

using namespace std;

class Animal
{

public:
	virtual void sound() = 0;
};

class Dog : public Animal

{
public:
	Dog()
	{
		cout << "Child Class" << endl;
	}
	void sound()
	{
		cout << "DOG";
	}
};

int main()

{
	Dog xyz;
	xyz.sound();

	getch();
	return 0;
}
