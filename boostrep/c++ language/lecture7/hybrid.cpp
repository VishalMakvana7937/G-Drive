#include<iostream>
using namespace std;

class A{
	
	public:
		void get(){
			
			cout<<"Helooo A"<<endl;
			
		}	
};

class B: public A{
	
	public:
		void get(){
			
			cout<<"Helooo B"<<endl;
			
		}	
};

class C: public A{
	
	public:
		void getC(){
			
			cout<<"Helooo C"<<endl;
			
		}	
};

class D: public B,public C{
	
	public:
		void getD(){
			
			cout<<"Helooo D"<<endl;
			
		}	
};

main(){
	
	D d1;
	
	d1.C::get();
	d1.B::get();
	d1.getC();
	d1.getD();
	
}