#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;


class CartItem
{

	public:
		
		CartItem() 
		{
		};
		
		virtual double calculatePrice() const = 0;
		virtual void displayDetails() const = 0; 

};

class Book : public CartItem
{
		protected:
			
			string title;
			string author;
			double pricePerUnit;
			int quantity;
		
		public:
						
			Book()
			
			{ };
			
			void setTitle(string t)
			{
				title = t;
			}
			
			
			void setAuthor(string a)
			{
				author = a;
			}
			
			void setPrice(double p)
			{
				pricePerUnit = p;
			}
			
			void setQuantity(int q)
			{
				quantity = q;
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
			double pricePerUnit;
			int quantity;
		
		public:
			
			Electronic()
			
			{ };
			
			void setBrand(string b)
			{
				brand = b;
			}
			
			void setPrice(double p)
			{
				pricePerUnit = p;
			}
			
			void setQuantity(int q)
			{
				quantity = q;
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


class ShoppingCart {
	
	protected:
    
	vector<CartItem*> items;   // created a pointer of parent class, and then it can access the objects of child class.
							  // As parent class properties are inherited downwards, similary parent class pointer can
							  // point to objects of child class.

	public:
    	void addItem(CartItem *item)
		{
        	items.push_back(item);
    	}

    void displayCart() {
        
		double total = 0.0;
        int size = items.size();
        
        for (int i = 0; i < size ; i++) {
            items[i] -> displayDetails();
            cout << "\nTotal Price for this item is: $" << items[i] -> calculatePrice() << endl;
            total += items[i] -> calculatePrice();
        }
        cout << "\nTotal Price for all items in the cart is: $" << total << endl;
    }


};

int main()

{
	Book B1;
	Electronic E1;
	ShoppingCart C1;
		
	B1.setAuthor("Paulo Coelho");
	B1.setTitle("Alchemist");
	B1.setPrice(250);
	B1.setQuantity(2);
	
	cout << "\n\n";
	
	B1.displayDetails();
	cout << "\nTotal Price:\t\t" << B1.calculatePrice();
	
	cout << "\n\n";
	
	E1.setBrand("SAMSUNG - SMART PHONE");
	E1.setPrice(500);
	E1.setQuantity(3);
	
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
