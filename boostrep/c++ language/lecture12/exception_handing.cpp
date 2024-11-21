#include<iostream>
using namespace std;
main(){
	
	int a=3,b=0,ans;
	char result[] = "hello";
	
	try{
		
		if(b==0){
			
			throw result;
			
		}else{
			
			ans = a / b;
			cout<<ans;
			
		}
		
	}
	catch(char n[]){
		
		cout<<result;
		
	}
	
}