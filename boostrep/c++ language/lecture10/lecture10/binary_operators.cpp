#include<iostream>
using namespace std;
class Time{
	
	public:
		int hou,min,sec;
		
		void set(int h,int m,int s){
			
			this->hou = h;
			this->min = m;
			this->sec = s;
			
		}
		
		void get(){
			
			cout<<hou<<":"<<min<<":"<<sec<<endl;
			
		}
		
		operator==(Time n){
			
			if(this->hou == n.hou && this->min == n.min && this->sec == n.sec){
				
				return true;
				
			}else{
				
				return false;
				
			}
			
		}
	
};

main(){
	
	Time t1,t2;
	
	t1.set(3,45,30);
	t1.get();
	
	t2.set(3,45,30);
	t2.get();
	
	// t1.operaton==()
	if(t1==t2){
		
		cout<<"Both time are same..";
		
	}else{
		
		cout<<"Both time are different..";
		
	}
	
}