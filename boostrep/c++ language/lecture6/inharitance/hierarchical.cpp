
// Hierarchical Inheritance.   
#include<iostream>
using namespace std;
class M{
	
	public:
		int id = 50;
	
};

class Bollywode: public M{
	
	public:
		void setB(){
			
			cout<<"IT IS BOLLYWODE MOVIE NUMBER:- "<<id<<endl;
			
		}
	
};

class Hollywode: public M{
	
	public:
		void setH(){
			
			cout<<"IT IS BOLLYWODE MOVIE NUMBER:- "<<id;
			
		}
	
};

main(){
	
	Bollywode b1;
	Hollywode h1;
	
	b1.setB();
	h1.setH();
	
}