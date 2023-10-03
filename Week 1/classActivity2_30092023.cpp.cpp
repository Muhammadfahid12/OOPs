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
		
		void getInfo()
		{
		}

		float calBonus(float p)
		
		{
			return Salary * p;
		}	

};

int main()

{
	Employee emp1, emp2, emp3;
	
	string id = "Emp1";
		
	emp1.setID(id);
	emp1.setName("Ahmad Hassan");
	emp1.setDesig("Engineering");
	emp1.setSalary(100000);
		
	emp2.setID("Emp2");
	emp2.setName("Ali Hassan");
	emp2.setDesig("Engineering - O&M");
	emp2.setSalary(20000);
	
	emp3.setID("Emp3");
	emp3.setName("Fahad Ali");
	emp3.setDesig("Engineering - AfterSales");
	emp3.setSalary(300000);
	
	
	cout << "ID: " << emp1.getId() << endl;
	cout << "Name: " << emp1.getName() << endl;
	cout << "Desig: " << emp1.getDesig() << endl;
	cout << "Salary: " << emp1.getSalary() << endl;
	cout << "Bonus: " << emp1.calBonus(0.2) << endl;
	
	cout << endl << endl;
	
	cout << "ID: " << emp2.getId() << endl;
	cout << "Name: " << emp2.getName() << endl;
	cout << "Desig: " << emp2.getDesig() << endl;
	cout << "Salary: " << emp2.getSalary() << endl;
	cout << "Bonus: " << emp2.calBonus(0.1) << endl;
	
	cout << endl << endl;
	
	cout << "ID: " << emp3.getId() << endl;
	cout << "Name: " << emp3.getName() << endl;
	cout << "Desig: " << emp3.getDesig() << endl;
	cout << "Salary: " << emp3.getSalary() << endl;
	cout << "Bonus: " << emp3.calBonus(0.3) << endl;
	
	
	getch();
	return 0;

}
