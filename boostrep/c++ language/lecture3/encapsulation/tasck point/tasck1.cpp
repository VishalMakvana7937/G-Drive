#include<iostream>
#include<string.h>
using namespace std;
class Emp{
	
	private:
		int id;
		char emp_name[1000];
		int emp_rool;
		int emp_salary;
		char emp_experience[1000];
		char emp_address[1000];
		char emp_email[1000];
		int emp_contact;
	
	public:
			void setEmp(int i,char n[1000],int r,int s,char e[1000],char add[1000],char ema[1000],int c){
				
				id = i;
				strcpy(emp_name,n);
				emp_rool = r;
				emp_salary = s;
				strcpy(emp_experience,e);
				strcpy(emp_address,add);
				strcpy(emp_email,ema);
				emp_contact = c;
				
			}
			
			void getEmp(){
				
				cout<<"Employee Id:- "<<id<<endl;
				cout<<"Employee Name:- "<<emp_name<<endl;
				cout<<"Employee roll:- "<<emp_rool<<endl;
				cout<<"Employee Salary:- "<<emp_salary<<endl;
				cout<<"Employee Experience:- "<<emp_experience<<endl;
				cout<<"Employee Address:- "<<emp_address<<endl;
				cout<<"Employee email:- "<<emp_email<<endl;
				cout<<"Employee Contact:- "<<emp_contact<<endl;
				cout<<endl;
				
			}
};

main(){
	
	Emp e1,e2,e3,e4,e5;
	
	e1.setEmp(3474,"ajay",83,20000,"2 year","sitaram soc,surat","av99345@email.com",4567789528);
	e2.setEmp(3430,"harsal",83,20000,"5 year","maharana sock,surat","ha99345@email.com",9965434520);
	e3.setEmp(3476,"yesh",83,20000,"1 year","mukatidham soc,surat","yesh99345@email.com",9537919972);
	e4.setEmp(3490,"udit",83,20000,"7 year","vijay nagar,surat","udit99345@email.com",9637942710);
	e5.setEmp(3452,"milan",83,20000,"10 year","syam dham nagar,surat","mi99345@email.com",7040237612);
	e1.getEmp();
	e2.getEmp();
	e3.getEmp();
	e4.getEmp();
	e5.getEmp();
	
}