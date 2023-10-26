
// Write five examples of Inheritence, and Association (Composition & Aggregation):


// Inheritence:
// Example 1:		Circle is a shape.

class Shape{
}; 

class Circle : public Shape {
};


// Example 2:		Car is a vehicle.

class Vehicle{
}; 

class Car : public Vehicle {
};


// Example 3:		Student is a person.

class Person{
}; 

class Student : public Person {
	
};


// Example 4:		Saving account is a bank account.

class BankAccount{
}; 

class SavingAccount : public BankAccount {
};


// Example 5:			Book is a cart item.

class cartItem{
}; 

class Book : public cartItem {
};




// Association:
// Composition:


// Example 1:			Car has doors.

class Door{
};


class Car {
	Door obj;
};


// Example 2:			Team has players.

class Players{
};


class Team {
	Players obj;
};


// Example 3:			Author has book.			

class Book{
};


class Author {
	Book obj;
};

// Example 4:			Customer has orders.

class Orders{
};


class Customers {
	Orders obj;
};



// Example 5:			Country has capital.

class Capital{
};

class Country {
	Capital obj;
};




// Association:
// Aggregation

// Example 1:		Person has address.

class Address{
};

class Person{
	
	Address obj;
};


// Example 2:		Student has instructor.

class Instructor{
};

class Student{
	
	Instructor obj;
};


// Example 3:		Shopping cart has cart items.

class CartItem{
};

class ShoppingCart{
	
	CartIem obj;
};

// Example 4:		Student has courses.

class Courses{
};

class Student{

	Courses obj;
};


// Example 5:		Hospital has doctors.


class Doctor{
};

class Hospital {
	Doctor obj;
};

