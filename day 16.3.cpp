#include<iostream>

using namespace std;

class user{
	
	private :
		
		int a;
	
	public :
	
	    int b;
		
	protected :
	  
	    int c;		
};
class student : public user{
	
	public :
		
		void Display(){
			
			a = 10;
			cout<<a;
			
			b = 20;
			cout<<b;
			
			c = 30;
			cout<<c;
		}
};

int main(){
	
	student obj;
	
	obj.Display();
	
	return 0;
}
