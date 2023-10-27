#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

//Funciton Overwriting ---> Parent and Child class have the fucnitons with same return type, signature/name, number of parameters, 
// and their data type.

class Base 
{
	public:
		
		virtual void info()
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
	
	Base* b = new Base(); // this works in VS Studio. When we use new key word, a memory is allocated in heap.
	b->info(); 
	
//	Child c;
//	b=&c;
//	b->info();
	
//	Child* C; 
//	C->info(); // this will call the function of child class.

//	Child* c = new Child(); // left side "Child* c" is called Reference Class (this will be checked on 
							// complilation time). Reference class pointing to object class inhertiting it's attributes and
							// functionalities.
							// Right side "new Child()" is called object class. This is checked on execution(run time). 
							// This will be showing the Base class fucntion because on the compilation time, fucntion of the
							// base class will be stored and compipler has decided to run it even compiler will find the fucntion in
							// the child class on the run time. There will be error if complier does not find the fucntion in the
							// reference class.
							// To call the child class function, we have to tell it explicitly. We use the key work "virtual" in the
							// class of which we don't want to call fucntion.
//	c->info(); 
	
	Base* p = new Child();  // Reference class pointing to object class
	p->info(); 				// Base* p = new Child() with keyword "virtual in parent class; This would work, and will access the child
							// class function. Parent class can point to child class inheriting it's fucntions, and overwriting will 
							// work in case of same name function. If child class don't have the same name function, function of 
							// the parent class would be called.
							// If we put virtual in child class, it would call the parent class function. It will not be overwriting &
							// it's parent class calling its own fucntion.
							
							// Base* p = new Base(); This will also work, but it won't be fucntion overwriting. Parent class is
							// calling it's own function if we either put keyword virtual in child or parent class.
							
							// Child* p = new Child(); Similar case as discussed above. This will also work, but it won't be 
							// fucntion overwriting. CHild class is calling it's own function if we either put keyword virtual in 
							// child or parent class.
							
							// Child* p = new Base(); This won't work. We cannot assign a Base object to a Child pointer. If we do,
							// it will give an error: invalid conversion from base to child.
	
	return 0;
}
