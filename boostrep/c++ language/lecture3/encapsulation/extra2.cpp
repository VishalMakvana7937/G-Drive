#include<iostream>
#include<string.h>
using namespace std;
class Student{
	
	private:
		int stu_id;
		
	public:
		char stu_name[1000];
		char address[1000];	
		
	public:	
		void setStu(int i,char n[1000],char a[1000]){
			stu_id = i;
			strcpy(stu_name,n);
			strcpy(address,a);
		}
		void getStu(){
			cout<<"Student Id:- "<<stu_id<<endl;
			cout<<"Student Name:- "<<stu_name<<endl;
			cout<<"Student Address:- "<<address<<endl;
			cout<<endl;
		}
};

main(){
	
	Student s1,s2,s3,s4,s5;
	
	s1.setStu(3071,"Vishal Makvana","gayatri soc puna bombe rod,surat");
	s2.setStu(3099,"Ajay Kasad","siya soc puna bombe rod,surat");
	s3.setStu(3087,"Vishal Makvana","radhesyam soc puna bombe rod,surat");
	s4.setStu(3067,"Vivek Mital","sitaram soc puna bombe rod,surat");
	s5.setStu(3037,"Sumit Patel","mukatidham soc puna bombe rod,surat");
	s1.getStu();
	s2.getStu();
	s3.getStu();
	s4.getStu();
	s5.getStu();
	
}