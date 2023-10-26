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


int main()

{
	Vehicle v;
	
	Vehicle v.setEngine(998);
	cout << v.getEngine;
	v.start();	
		
	getch();
	return 0;
}


