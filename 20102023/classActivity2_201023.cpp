class Item

{
	protected:
		
	int quantity;
	int price;
	
	public:
		Item() {
		}
		virtual void details() = 0;
		virtual double calPrice() = 0;
};
class Toy : public Item

{
	
	string name;
	
	public:
		
		Toy (string n, int p, int q) : Item (p,q)
		{
			name = n; 
		}
};



void details()
{
	
	cout << name << end;
	cout << price << end;
	cout << quantity << end;
}


double calprice ()


{
	return quantity * price;
	
}

int main ()

{
	
	Toy t("Car", 50, 10);
	t.details();
	cout << t.calPrice(); 
	
	return 0;
	
}


ShoppingCart

{
	int item;
	Toy obj [SIZE]
	
	public:
		
		void addItem (Toy y)
		{
			
			if(item < SIZE)
			
			{
				obj[item] = y;
				item += 1;
			}
			
			}	
}


main:
	
	Toy b();
	Toy s();
	
	
	ShoppingCart c;
	c.addItem (t);
	c.addItem (s);
	
	c.displayCart();
	
	
	



