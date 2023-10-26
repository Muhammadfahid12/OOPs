// Usually, inherited classes are not friend classes.

#include <iostream>
#include <conio.h>

using namespace std;


class Test

{
	int number;
	int second_no;


public:
	Test()
	{
		number = 10;
		second_no = 50;
	}
	
	friend class Random; // This friendship is one way. It is not mutual.
						//	Here, Random is a freind of Test class whereas Test is not a friend of random class.
						// For mutaul or bothway friendship, we will have to declare friendship in both classes.
	
};


class Random

{
	
	public:
		
		void add(Test obj)
		
		{
			cout << obj.number + obj.second_no;
		}
	
};


int main()

{
	
	Test abc;
	Random xyz;
	
	
	xyz.add(abc);
	
	getch();
	return 0;
	
}




