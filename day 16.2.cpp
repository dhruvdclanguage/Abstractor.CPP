#include<iostream>

using namespace std;

class Parent{
	
	public :
		
	      void childdetails(){
	     	
	     	cout<<"My name is Nitinbhai Sonani"<<endl;
	     	cout<<"My Age is 46"<<endl;    	
		}
};
class Child : public Parent{
	
	public : 
		
		virtual void childdetails(){
		        	
			cout<<"My name is Dhruv Sonani"<<endl;
			cout<<"My Age is 23"<<endl;
		}
};

int main(){
	
	Parent* obj1;
	Child obj2;
	
	obj1 = &obj2;
	
	obj1->childdetails();
		
	return 0;
}
