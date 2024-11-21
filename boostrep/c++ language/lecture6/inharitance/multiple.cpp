// Multiple Inheritance.
#include<iostream>
using namespace std;

class A{
	
	public:
		int id = 10;
		
		void setA(){
			
			cout<<"MY NAME IS VISHAL"<<endl;
			
		}
	
};

class C{
	
	public:
		void setC(){
			
			cout<<"I AM FULL STACK DEVLOPER";
			
		}
	
};

class B: public A,public C{
	
	public:
		void setB(){
			
			cout<<"MY GR ID IS:- "<<id<<endl;
			
		}
	
};

main(){
	
	B b1;
	
	b1.setB();
	b1.setA();
	b1.setC();
	
}