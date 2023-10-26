

class Food{
	
	int price;
	string category;
	string name;
	int a;
	
		
	public:
		
		Food()
		
		{
			cout << "This is food class.";
		}
	

		~Food()
		{
			cout << "Destroying food class object";
		}
		
		Food (int x)
		
		{
			a = x;
			
		}	

};

main:
	
Food f;
Food a(30);
	
	
