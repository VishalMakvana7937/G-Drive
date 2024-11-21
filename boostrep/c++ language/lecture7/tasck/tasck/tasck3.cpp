// Q. WAP to read and print employee information using multiple inheritance.
#include<iostream>
using namespace std;
class Emp{
	
	public:
		int id = 10;
		int age = 19;
		char company[100] = "Reliance Digital";
		
		void setemp(){
			
			cout<<"My name is vishal"<<endl;
			
		}
	
};

class Employee: public Emp{
	
	public:
		void setEmployee(){
			
			cout<<"My id is:- "<<id<<endl;
			cout<<"My age is:- "<<age<<endl;
			cout<<"Company name is:- "<<company<<endl;
			
		}
		
	
};

main(){
	
	Employee e1;
	
	e1.setemp();
	e1.setEmployee();
	
}
