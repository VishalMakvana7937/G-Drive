#include<iostream>
using namespace std;
class Stu{
	
	public:
		
		void setStu(){
			
			cout<<"Vishal is very smart..."<<endl;
			
		}
		
		void setStu(int n){
			
			cout<<"Vishal renck is:- "<<n<<endl;
			
		}
		
		void setStu(float n){
			
			cout<<"First semester result:- "<<n<<endl;
			
		}
		
		void setStu(int f,float l){
			
			cout<<"Third semester result:- "<<f<<" and Second semester:- "<<l;
			
		}
	
};

main(){
	
	Stu s1;
	
	s1.setStu();
	s1.setStu(2);
	s1.setStu(76.37f);
	s1.setStu(70,66.57);
	
}