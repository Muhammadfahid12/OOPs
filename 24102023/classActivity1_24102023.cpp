
// Relationship Among calsses (Inheritence vs Association)

// - Inheritence	--- > Always 'is a' relationshio e.g. circle is a shape, student is a person, book is a cart item, 
// 						saving account is a bank account


// - Association	--- > Always 'has a' relationshio e.g. car has dooe, circle has radius
//					
//					It has two types --- > Composition and Aggregation
//					Composition --- > Composed or comprised of multiple things
//									Car has doors/Car is composed of doors
//					If car object is destroyed, then there is no need to create objects of door.
//					Composition is tightly coupled.


//					Aggregation --- > Aggregation is loosely coupled. e.g. Person has an address.
//					If an object of a Person is destroyed, we still keep the address
//					No overriding in association
//					Associated classes cannot access private, protecetd data members.					

				


// - Independent



#include <iostream>
#include <conio.h>

using namespace std;

class Shape {
	

};

class Circle : public Shape {
	
};


class Door{
};


class Car {
	
	Door obj;
};


int main()

{
	
	
	getch();
	return 0;
}
