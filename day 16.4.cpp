#include<iostream>

using namespace std;

class A{
	
	public :
		
		virtual void calculate()=0;

};
class B : public A{
	
	public :
		
		float a,b,c,s,r,area;
		
		void calculate(){
			
			cout << "\nEnter the Circle: ";
            cin >> r;
            area = 3.14159 * r * r;
            cout<<"Area of Circle = "<<area<<endl;
            
            
            cout << "\nEnter the Triangle: ";
            cin >> a >> b;
            area = (a*b) / 2;
            cout<<"Area of Triangle = "<<area<<endl;
            
            
            
            cout << "\nEnter the  Rectangle: ";
            cin >> a >> b;
            area = a * b;
            cout<<"Area Of Rectangle = "<<area<<endl;	
		}
};

int main(){
	
	B obj;
	
	obj.calculate();
	
	return 0;
}
