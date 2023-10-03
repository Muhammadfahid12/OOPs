#include <iostream>
#include <conio.h>

using namespace std;

class Employee {

	private:
			
		string Id;
		string Name;
		string Desig;
		int Salary;
	
	public:
		
		void setID(string id)
		
		{
			Id = id;
		}

		void setName(string name)
		
		{
			Name = name;
		}
		
		void setDesig(string desig)
		
		{
			Desig = desig;
		}
		
		void setSalary(int salary)
		
		{
			Salary = salary;
		}
		
		
		string getId()
	
		{
			return Id;	
		}
		
		
		string getName()
	
		{
			return Name;	
		}
		
		string getDesig()
	
		{
			return Desig;	
		}
		
		int getSalary()
	
		{
			return Salary;	
		}
		
};

int main()

{
	Employee emp1;
	
	string id = "Emp1";
		
	emp1.setID(id);
	emp1.setName("Ahmad Hassan");
	emp1.setDesig("Engineering");
	emp1.setSalary(100000);
	
	cout << "ID: " << emp1.getId() << endl;
	cout << "Name: " << emp1.getName() << endl;
	cout << "Desig: " << emp1.getDesig() << endl;
	cout << "Salary: " << emp1.getSalary() << endl;
	
	getch();
	return 0;

}