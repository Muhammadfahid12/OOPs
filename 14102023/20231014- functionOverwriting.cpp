#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

//Funciton Overwriting ---> Parent and Child class have the fucnitons with same return type, signature/name, number of parameters, 
// and their data type.

class Base 
{
	public:
		
		void info()
		{
			cout <<"Base Class" <<endl;
		}
};

class Child :public Base
{
	public:
		
		void info()
		{
		cout <<"Child Class" <<endl;
		}
};

int main()
{
	Base b;
	b.info(); // this will call the function of parent class.
	
	Child c;
	c.info(); // this will overwrite and call the child class function.
			// if there was no fucntion in the child class, parent class function would have been called. This is not overwriting
			// though.
	
	return 0;
}
