#include<iostream>
using namespace std;
main(){
	
	int a=3,b=0,ans;
	char result[] = "hello";
	float f = 45.67;
	
	try{
		
		if(b==0){
			
			throw 30;
			
		}else{
			
			ans = a / b;
			cout<<ans;
			
		}
		
	}
	catch(...){
		
		cout<<f<<" general exception";
		
	}
	
}