#include<iostream>
#include<string.h>
using namespace std;

class Car{
	
	public:
		int model_no;
		char car_name[100];
	
};

int main(){
	
	Car s1,s2;
	
	s1.model_no = 5;
	s2.model_no = 10;
	
	strcpy(s1.car_name,"BMW");
	strcpy(s2.car_name, "thar");
	
	cout<<"model number:- "<<s1.model_no<<endl;
	cout<<"model number:- "<<s2.model_no<<endl;
	cout<<"car name:- "<<s1.car_name<<endl;
	cout<<"car name:- "<<s2.car_name<<endl;
	
	
}