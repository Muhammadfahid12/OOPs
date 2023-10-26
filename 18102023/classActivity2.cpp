#include <iostream>
#include <conio.h>

using namespace std;

class Vehicle

{
	int engine;
	
	public:
		
		void setEngine (int eng)
		{
			engine = eng;
		}
	
		int getEngine()
		{
			return engine;
		}
	
		Vehicle()
		{
			engine = 0;
		}
		
		virtual void start() = 0;
};


class Car : public Vehicle

{
	string transmission;
	
	public:
		
		void setTrans(string trans)
		{
			transmission = trans;
		}
		
		string getTrans()
		{
			return transmission;
		}
	
	
};

int main()

{
	Car abc;							// As it is inhertting pure virtual function from parent class and it does not have
										// implementation of pure virtual function, so we will not be able to create an object
										// of the child class. As, it also considers it as abstract class.
	
	abc.setEngine(1000);
	abc.setTras("Auto"); 
	cout << abc.getEngine();
	cout << abc.getTrans();
	abc.start();
	
	
		
	getch();
	return 0;
}


