#include<iostream>

using namespace std;

class Car{
	
	public :
		
		virtual void Automatic()=0;
		
};
class Audi : public Car{
	
	public :
		
		void Automatic(){
			
			cout<<"car is Automatic"<<endl;
			cout<<"Let's drive"<<endl; 
		}
};

int main(){
	
	Audi obj;
	
	obj.Automatic();
	
	return 0;
}
