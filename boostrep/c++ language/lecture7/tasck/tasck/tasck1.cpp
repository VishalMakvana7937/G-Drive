// Q.  WAP with a mother class and an inherited daugther class.Both of them should have a method void display ()that prints a message (different for mother and daugther). In the main define a daughter and call the display() method on it.
#include<iostream>
using namespace std;

class Mother{
	
	public:
		void get(){
			
			cout<<"Mother Call:- My Daugther Name Is Rita"<<endl;
			
		}
	
};

class Daugther: public Mother{
	
	public:
		void get(){
			
			cout<<"Daugther:- My Mother Name Is Divya";
			
		}
	
};

main(){
	
	Daugther d1;
	
	d1.Mother::get();
	d1.get();
	
}