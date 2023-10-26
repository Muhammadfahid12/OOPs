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
	Base* b;
//	b.info(); // this will not work since the object is a pointer.
	b->info(); // this will work since we are using this pointer. We can call the fucntion with this pointer as well.
	
	
//	Child c;
//	b=&c;
//	b->info();
	
	Child* C; 
	C->info(); // this will call the function of child class.
	
	return 0;
}
