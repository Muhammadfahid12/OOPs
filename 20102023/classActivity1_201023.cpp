

addItem
{

}


Book
Electronic
Toys
Garments

ShoppingCart
{
	int itemCount;
	CartItem *pt[SIZE];

	public:
		
		void addItem(CartItem *abc)
		{
			if(itemCount < SIZE)
			
			{
				pt[itemCount] = abc;
				itemCount += 1;
				
			}
			
		}


}


// Seperation of Concerns

// Parents class can be used as reference.
// Same class can be used as reference.

Main:
	
	Book book ();
	ShoppingCart s;
	
	s.addItem(&book);
	
	
	Book *b1 = new Book
	
	s.addItem(b1);
	
	
	
	
Polymorphism:

Compile Time 	--- > Function Overloading  --- > Within same classes
Run Time		--- > Function Overriding	--- > with extended classes	






