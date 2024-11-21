#include<iostream>
using namespace std;

class Leap{
	
	int minutes,result;
	
	public:
		void Leapyear(){
			
			cout<<"Enter the Minutes :- ";
			cin>>minutes;
			
			result = minutes * 60;
			
			cout<<"second:- "<<result;
		}
};

int main(){
	Leap l1;
	
	l1.Leapyear();
}