#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;


class CartItem
{
	protected:
		
		double pricePerUnit;
		int quantity;
		
		
	public:
		
		CartItem(double p, int q) 
		{
			pricePerUnit = p;
			quantity = q;
		}
		
		virtual double calculatePrice() const = 0;
		virtual void displayDetails() const = 0; 

};

class Book : public CartItem
{
		protected:
			
			string title;
			string author;
		
		public:
						
			Book(string t, string a, double p, int q) : CartItem(p,q)
			
			{ 
				title = t;
				author = a;
					
			}
			
			
			double calculatePrice() const override
			{
				return pricePerUnit * quantity;
			}
			
			void displayDetails() const override
			{
				cout << "\nBook Title:\t\t" << title;
				cout << "\nBook Author:\t\t" << author;
				cout << "\nBook Price:\t\t" << pricePerUnit;
				cout << "\nQuantity Ordered:\t" << quantity;
			}
};


class Electronic : public CartItem
{
		protected:
			
			string brand;
			
		public:
			
			Electronic(string b, double p, int q) : CartItem (p,q)
			
			{
				brand = b;
			}
			
			double calculatePrice() const override
			{
				return pricePerUnit * quantity;
			}
			
			void displayDetails() const override
			{
				cout << "\nBrand Name:\t\t" << brand;
				cout << "\nItem Price:\t\t" << pricePerUnit;
				cout << "\nQuantity Ordered:\t" << quantity;
			}
};

const int SIZE = 10;

class ShoppingCart {
	
	int item = 0;
	CartItem *pt[SIZE];
	
	
	public:
		
		void addItem (CartItem *abc)

		{
			if(item < SIZE)
			{
				pt[item] = abc;
				item += 1;
			}
			
			else
			
	
			cout << "/nCannot add more items!";
		}

	void displayCart() {
        
		double total = 0.0;
        
        for (int i = 0; i < item ; i++) {
            pt[i] -> displayDetails();
            cout << "\nTotal Price for this item is: $" << pt[i] -> calculatePrice() << endl;
            total += pt[i] -> calculatePrice();
        }
        cout << "\nTotal Price for all items in the cart is: $" << total << endl;
    	}



};

int main()

{
	Book B1("Paulo Coelho", "Alchemist", 250,2);
	Electronic E1("SAMSUNG - SMART PHONE", 500, 3);
	ShoppingCart C1;

	cout << "\n\n";
	
	B1.displayDetails();
	cout << "\nTotal Price:\t\t" << B1.calculatePrice();
	
	cout << "\n\n";
	
	E1.displayDetails();
	cout << "\nTotal Price:\t\t" << E1.calculatePrice();
	
	cout << "\n\n";
		
	C1.addItem(&B1);
	C1.addItem(&E1);
	
	cout << "\nYour cart details are as below:" << endl;
	C1.displayCart();
		
	getch();
	return 0;
		
}
