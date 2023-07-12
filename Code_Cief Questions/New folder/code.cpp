#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a,b;

	
	while(t--){
	    int n,N,k;
	    cin>>N;
	    
        vector <int> v;
	    for(int i=0;i<n;i++){
	        cin>>n;
            v.push_back(n);
	    }
        
	    cin>>k;
        
	    a=v[k];
        
	    sort(v.begin(),v.end());
	    for(int i=1;i<=12;i++){
	        if(v[i]==a){
	            b=i;
	        }
	    }
	    cout<<b<<endl;
	}
	return 0;
}
