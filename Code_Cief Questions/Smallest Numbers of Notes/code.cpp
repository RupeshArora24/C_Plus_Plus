#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n,t;
	cin>>t;
	int a;
	a=0;
	while(t--){
	    cin>>n;
	    while(n>0){
	     if(n>=100){
	         a=a+1;
	         n=n-100;
	     }
	     else if(n>=50){
	         a=a+1;
	         n=n-50;
	     }
	     else if(n>=10){
	         a=a+1;
	         n=n-10;
	     }
	     else if(n>=5){
	         a=a+1;
	         n=n-5;
	     }else if(n>=2){
	         a=a+1;
	         n=n-2;
	     }else{
	         a=a+1;
	         n=n-1;
	     }
	    
	    }cout<<a<<endl;
	    a=0;
	}
	
	return 0;
}
