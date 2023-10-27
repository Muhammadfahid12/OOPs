
// We use abstract classes to reuse the code. We combine common functionalities and defince basic classes to reuse 
// the same code again and again.


// We make abstarct classes so that we a


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
		
		void start()
		{
			cout << "\nStarting the Car";
		}
	
	
};

int main()

{
	Car abc;							
	
	abc.setEngine(1000);
	abc.setTrans("Auto"); 
	cout << abc.getEngine();
	cout << abc.getTrans();
	abc.start();
	
	Vehicle *obj = new Car();
	obj -> start(); 

	
	getch();
	return 0;
}


