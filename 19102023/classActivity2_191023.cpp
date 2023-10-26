#include <iostream>
#include <conio.h>

using namespace std;


class Test {
	
	
	public:
		
		void fun()
		{
			cout << "\nHello";
		}
	
	
};

class Check {
	
	Test a;
	
	public:
		
		void something()
		{
			a.fun();
		}
	
};


int main()


{
	Test a1;
	Check c1;
	
	a1.fun();
	c1.something();
	
	getch();
	return 0;
	
}

