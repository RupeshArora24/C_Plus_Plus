#include <iostream>
using namespace std;

int main() {
	
	int t,n,ans;
	
	int a;
	cin>>t;
	while(t--){
	    cin>>n;
	   
	    ans=a=n;
	    ans=1; 
	    for(int i=0;i<(a-1);i++){
	        
	        ans=ans*n;
	        n=n-1;
	        
	    }cout<<ans<<endl;
	}
	// your code goes here
	return 0;
}
