#include <iostream>
using namespace std;
#include<string>

int main() {
	// your code goes here
	int t,n,b,a;
	string s,s1;
	
	cin>>t;
	while(t--){
	    cin>>n;
	    s1=to_string(n);
	    a=n;
	    while(n>0){
	        b=n%10;
	        s.append(to_string(b));
	        n=n/10;
	    }
	    
	    if(s1==s){
	        cout<<"wins"<<endl;
	    }
	    else{
	        cout<<"loses"<<endl;
	    }
	    s.clear();
	    s1.clear();
	}
	
	
	return 0;
}
