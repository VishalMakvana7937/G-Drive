#include<iostream>
using namespace std;
class A{
	
	public:
		int x,y;
		
		void set(int n1,int n2){
			
			x = n1;
			y = n2;
		}
		
		void get(){
			
			cout<<"X = "<<x<<" "<<"Y = "<<y<<endl;
			
		}
		
		A operator+(A n){
			
			A temp;
			
			temp.x = x + n.y;
			temp.y = y + n.x;
			
			return temp;
			
		}
	
};

main(){
	
	A a1,a2,a3;
	
	a1.set(2,5);
	a1.get();
	
	a2.set(6,3);
	a2.get();
	
	a3 = a1 + a2; 
	a3.get();
	
}