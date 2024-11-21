#include<iostream>
#include<string.h>
using namespace std;
class Emp{
	
	private:
		int emp_id;
		char emp_name[100];
		
	public:	
		// setter
		void setEmp(int i,char n[100]){
			
			emp_id = i;
			strcpy(emp_name,n);
			
		}
		// getter
		void getEmp(){
			
			cout<<"emp id:- "<<emp_id<<endl;
			cout<<"emp name:- "<<emp_name;
			
		}
	
};

main(){
	
	Emp e1;
	
	e1.setEmp(3349,"denish");
	e1.getEmp();
	
}