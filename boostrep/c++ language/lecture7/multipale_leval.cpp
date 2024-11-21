#include<iostream>
using namespace std;

class A{
	
	public:
		void get(){
			
			cout<<"Helooo A";
			
		}
	
};

class B: public A{
	
	public:
		void get(){
			
			cout<<"Helooo B";
			
		}
	
};

class C: public B{
	
	public:
		void getC(){
			
			cout<<"Helooo C";
			
		}
	
};

class D: public C{
	
	public:
		void getD(){
			
			cout<<"Helooo D";
			
		}
	
};

main(){
	
	D d1;
	
	d1.B::get();
	
}



