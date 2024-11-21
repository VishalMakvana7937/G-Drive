#include<iostream>
using namespace std;
class Stu{
	public:
		char name[100];
		
		// constructor
		// default
		Stu(){
			cout<<"I am constructor"<<endl;
			cout<<endl;
		}
		
		// parameterized
		Stu(char n[100]){
			strcpy(name,n);
			cout<<"Student name:- "<<name<<endl;
			cout<<endl;
		}
		
		// copy
		Stu(Stu &n){
			strcpy(name,n.name);
			cout<<"Student name:- "<<name<<endl;
			cout<<endl;
		}
		
		// destructor
		~Stu(){
			cout<<"I am destructor"<<endl;
		}
};

int main(){
	Stu s1,s2("Vishal"),s3(s2),s4=s2;
}