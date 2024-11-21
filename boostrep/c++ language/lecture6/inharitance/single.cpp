// Single Inheritance.
#include<iostream>
using namespace std;

class A{
	
	public:
		int id=10;
		
		void setl(){
			
			cout<<"MT NAME IS VISHAL"<<endl;
			
		}
		
	
};

class B: public A{
	public:
		void setB(){
			
			cout<<"I AM BCA STUDENT:- "<<id<<endl;
			
		}
	
};

main(){
	
	B b1;
	
	b1.setB();
	b1.setl();
	
}