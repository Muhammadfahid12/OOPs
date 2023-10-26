
#include <iostream>
#include <conio.h>

using namespace std;


class A

{

	int a = 5;
	
	protected:
		
	int b = 6;
	
	
	public:
		
	friend int Add (A t);

};


int Add(A t)
{
	return t.a + t.b;	
}


int main()

{

	A obj;
	
	cout << Add(obj);

	
	getch();
	return 0;

}
