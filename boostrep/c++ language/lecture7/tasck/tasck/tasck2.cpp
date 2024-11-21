// Q. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function. Then create two bases variables Zebra and Dolphin which write a message telling the age, the name and giving some extra information (e.g. place of origin).
#include<iostream>
using namespace std;
class Animal{
	
	public:
		char name[1000] = "udit";
		int age = 55;
		char place[1000] = "Surat";
		char origin[1000] = "Ton Taun";
	
};
class Zebra: public Animal{
	
	public:
		void setZ(){
			
			cout<<"Zebra Name:- "<<name<<endl;
			cout<<"Zebra Age:- "<<age<<endl;
			cout<<"Zebra Place:- "<<place<<endl;
			cout<<"Zebra Origin:- "<<origin<<endl;
			
		}
	
};
class Dolphin: public Animal{
	
	public:
		void setD(){
			
			cout<<"Dolphin Name:- "<<name<<endl;
			cout<<"Dolphin Age:- "<<age<<endl;
			cout<<"Dolphin Place:- "<<place<<endl;
			cout<<"Dolphin Origin:- "<<origin<<endl;
			cout<<endl;
			
		}
	
};

main(){
	
	Dolphin d1;
	Zebra z1;
	
	d1.Dolphin::setD();
	z1.Zebra::setZ();
	
}