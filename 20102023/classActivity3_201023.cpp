

// Reference class should be a parent class.

const int SIZE = 10


class ShoppingCart {

	int item;
	CartItem *pt[SIZE];
	
	
	public:
		
		void addItem (CartItem *abc)

		{
			if(item < Size)
			{
				pt[item] = abc;
				item += 1;
			}
			
			else
		}

};
