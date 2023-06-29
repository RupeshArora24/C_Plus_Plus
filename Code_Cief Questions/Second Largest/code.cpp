#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;

	if((a>b and a<c)or(a>c and a<b)){
	    cout<<a<<endl;
	}
	else if((b>a and b<c)or(b>c and b<a)){
	    cout<<b<<endl;
	}
	else{
	    cout<<c<<endl;
	 }
    }
	return 0;
}
