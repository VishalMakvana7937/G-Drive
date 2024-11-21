// unary operators
#include<iostream>
using namespace std;
class A{
	
	public:
		int a;
		
		void set(int a1){
			
			this->a = a1;
			
		}
		
		void get(){
			
			cout<<"A = "<<a<<endl;
			
		}
		
		// postfix a++ and prefix ++a
		A operator++(int){
			
			A temp;
			
			temp.a = ++a;
			
			return temp;
			
		}
	
};

main(){
	
	A a1,a2;
	
	a1.set(5);
	a1.get();
	
	a1++;
	a1.get();
	
	a2 = a1++; // a1.operator++(int)
	a2.get();
	
}