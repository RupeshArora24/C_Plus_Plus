#include<iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int temp1,temp,arr[t],even,odd;
	
	temp=temp1=even=odd=0;
	
	for(int i=0;i<t;i++){
	    cin>>arr[i];
	}
	
	for(int j=0;j<t;j++){
	  if(arr[j]%2==0){
	       even=even+1;
	       cout<<"even = "<<even;
	   }
	   else{
	       odd=odd+1;
	       cout<<"odd = "<<odd;
	   }
	} 
	   
	
	temp1=(even-odd);
	temp=abs(temp1);
	cout<<temp;
	
	return 0;
}
