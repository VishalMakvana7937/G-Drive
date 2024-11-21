#include<iostream>
using namespace std;
class Stu{
	public:
		Stu(){
			cout<<"i'am constructor"<<endl;
		} 
		
		~Stu(){
			cout<<"i'am distructor";
		}
};

int main(){
	Stu s1;
}