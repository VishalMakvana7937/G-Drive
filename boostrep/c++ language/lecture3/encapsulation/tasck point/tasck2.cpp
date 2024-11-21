#include<iostream>
using namespace std;

class Leap{
	
	int y;
	
	public:
		void Leapyear(){
			
			cout<<"Enter the year:- ";
			cin>>y;
			
//			if((y%4==0) && (y%100!=0))
//        	cout<<"\nIt is a Leap Year";
//    		else if(y%400==0)
//        	cout<<"\nIt is a Leap Year";
//    		else
//        	cout<<"\nIt is not a Leap Year";
			
			if(y>=2000 && y<=3000){
				if(y%4 == 0){
					cout<<"This is leap year";
				}else{
					cout<<"This is not leap year";
				}
			}else{
				cout<<"Enter valid year";
			}
		}
	
};

main(){
	
	Leap l1;
	
	l1.Leapyear();
	
}