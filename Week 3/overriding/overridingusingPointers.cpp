// #include <iostream>
// using namespace std;

// class Base
// {
// public:
//     void displayName()
//     {
//         cout << "I am base class function" << endl;
//     }
// };

// class Child : public Base
// {
// public:
//     void displayName()
//     {
//         cout << "I am child class function" << endl;
//     }
// };

// int main()
// {
//     Base *ptr;
//     // ptr->displayName();

//     Child ptr1;
//     // ptr1.displayName();

//     ptr = &ptr1;

//     ptr->displayName();
// }



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
//	Base* b;
//	b.info(); // this will not work since the object is a pointer.
//	b->info(); // this will work since we are using this pointer. We can call the fucntion with this pointer as well.
				// Base* p declares a pointer variable p of type Base*. This means p can store the memory address of objects of 
				// the Base class or any of its derived classes.
	Base* b = new Base(); // new Child() dynamically allocates memory to create an object of the Child class on the heap.
						  // The new operator returns a pointer to the newly created object.
						  // The assignment Base* p = new Child(); assigns the memory address of the newly created Child object
						  // to the pointer p. This is possible because Child is derived from Base.
						  // Because p is a pointer of type Base*, it can be used to access the methods and attributes of the
						  // Base class and any overridden methods in the Child class.
	b->info(); 
	
//	Child c;
//	b=&c;
//	b->info();
	
//	Child* C; 
//	C->info(); // this will call the function of child class.

	Child* c = new Child(); // left side "Child* c" is called Reference Class (this will be checked on 
							// complilation time). Reference class pointing to object class inhertiting it's attributes and
							// functionalities.
							// Right side "new Child()" is called object class. This is checked on execution(run time). 
							// This will be showing the Base class fucntion because on the compilation time, fucntion of the
							// base class will be stored and compiler will decide to run it even compiler will find the fucntion in
							// the child class on the run time. There will be error if complier does not find the fucntion in the
							// reference class.
							// To call the child class function, we have to tell it explicitly. We use the key work "virtual" in the
							// class of which we don't want to call fucntion. Virtual means pass on and check the other/child class. 
							// If it finds the function in the child class otherwise will call from the parent.
	c->info(); 
	
//	Base* p = new Child();
//	p->info();
//	
	return 0;
}
