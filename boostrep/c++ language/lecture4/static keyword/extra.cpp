#include<iostream>
using namespace std;
class Stu{
	
	public:
		int id;
		char stu_name[1000];
		static char scholl[1000];
		
	public:
		void setStu(int i,char n[1000]){
			
			id = i;
			strcpy(stu_name,n);
			
		}
		void getStu(){
			
			cout<<"Student id:- "<<id<<endl;
			cout<<"Scholl name:- "<<scholl<<endl;
			cout<<"Student name:- "<<stu_name<<endl;
			cout<<endl;
			
		}
	
};

class Emp{
	
	public:
		static char company[1000];
		
	public:
//		void setEmp(char c[1000]){
//			
//			strcpy(company,c);
//			
//		}
		void getEmp(){
			
			cout<<"Company Name:- "<<company<<endl;
			cout<<endl;
			
		}
	
};

char Stu::scholl[1000] = "ABC";
char Emp::company[1000] = "ABA";


main(){
	
	Stu s1,s2,s3;
	Emp e1;
	
//	e1.setEmp("vishal");
	e1.getEmp();
	
	s1.setStu(2074,"vishal");
	s2.setStu(6067,"ajay");
	s1.getStu();
	s2.getStu();
	
	strcpy(s3.scholl, "xyz");
	s3.setStu(5289,"milan");
	s3.getStu();
	
}