#include <iostream>
using namespace std;
#include <string>
int main() {
	// your code goes here
	int t;
	int ans;
	ans=0;
	cin>>t;
	string s;
	while(t--){
	    cin>>s;
	    int l=s.length();
	   for(int i=0;i<l;i++){ 
	    if(s[i]=='A'){
	        ans=ans+1;
	    }
	    else if(s[i]=='B'){
	        ans=ans+2;
	    }
	    else if(s[i]=='D'){
	        ans=ans+1;
	    }
	    else if(s[i]=='O'){
	        ans=ans+1;
	    }
	    else if(s[i]=='P'){
	        ans=ans+1;
	    }
	    else if(s[i]=='Q'){
	        ans=ans+1;
	    }
	    else if(s[i]=='R'){
	        ans=ans+1;
	    }
	    else{
	        ans=ans+0;
	    }
	       
	   }cout<<ans<<endl;
	   ans=0;
	   
	}
	return 0;
}
