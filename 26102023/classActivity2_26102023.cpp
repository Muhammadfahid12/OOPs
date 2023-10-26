#include <iostream>
#include <conio.h>

using namespace std;


class Food{
	
	public:
		
		Food()
		
		{
			cout << "\nThis is food class.";
		}
	

		~Food()
		{
			cout << "\nDestroying food class object";
		}
};


class FastFood : public Food

{
	
	public:
		
		FastFood()
		
		{
			cout << "\nThis is fast food class.";
		}
	

		~FastFood()
		{
			cout << "\nDestroying fast food class object";
		}
};

class Burger : public FastFood

{
	
	public:
		
		Burger()
		
		{
			cout << "\nThis is burger class.";
		}
	

		~Burger()
		{
			cout << "\nDestroying burger class object";
		}
};




int main()

{
	Burger b;
	
	cout << "\nOop Class";		// Destructors will be called after the execution of these cout commands or any othre task.
	cout << "\n" << 10 + 8;
	
	cout << "\n\n\n";
	
	
						// When destructor is called, then memory of last created object (which is
						// grand child (burger class) in this case) is destroyed in first place.
					
						// We can create multiple constructors but only one destructor.
						
						
	getch();
	return 0;

}
