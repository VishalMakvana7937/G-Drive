#include<iostream>
#include<string.h>
using namespace std;
class Stu{
	
	public:
		int id;
		int age;
		char name[100];
		
		// constructor
		
		// default
		Stu(){
			
			cout<<"My Name Is Vishal"<<endl;
			
		}
		
		// Parameterized 
		Stu(int i,int a,char n[100]){
			
			this->id = i;
			this->age = a;
			strcpy(name,n);
			
			cout<<"Student Id:- "<<id<<endl;
			cout<<"Student Age:- "<<age<<endl;
			cout<<"Student Name:- "<<name<<endl;
			
		}
		
		// copy
		Stu(Stu &n){
			
			this->id = n.id;
			this->age = n.age;
			strcpy(name,n.name);
			
			cout<<"Student Id:- "<<id<<endl;
			cout<<"Student Age:- "<<age<<endl;
			cout<<"Student Name:- "<<name<<endl;
		}
		
		// destructor
		~Stu(){
			
			cout<<"My Name Is vishal"<<endl;
			
		}
	
};

main(){
	
	Stu s1(3012,18,"Ajay"),s2,s3(s1),s4 = s1;
	
}