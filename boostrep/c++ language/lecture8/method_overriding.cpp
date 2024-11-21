#include<iostream>
using namespace std;
class Ind{
	
	public:
		
		void Wear(){
			
			cout<<"India wear is T-sart and jeans..."<<endl;
			
		}
	
};

class USA: public Ind{
	
	public:
		
		void Wear(){
			
			cout<<"India wear is shurt..."<<endl;
			
		}
	
};

class Japan: public Ind{
	
	public:
		
		void Wear(){
			
			cout<<"Japan wear is shurt..."<<endl;
			
		}
	
};

main(){
	
	USA u1;
	Japan j1;
	
	u1.Wear();
	u1.Ind::Wear();
	j1.Japan::Wear();
	
}