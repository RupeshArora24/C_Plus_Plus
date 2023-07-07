#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	vector <int> pw,rw;
	cin>>t;
	while(t--){
	    int N,n;
	    cin>>N;
	    for(int i=0;i<N;i++){
	        cin>>n;
	        pw.push_back(n);
	    }
	     for(int i=0;i<N;i++){
	        cin>>n;
	        rw.push_back(n);
	    }
	    
	    sort(pw.begin(),pw.end());
	    sort(rw.begin(),rw.end());
	   
	    
	    int i,j,c;
	    i=0;
	    j=0;
	    c=0;
	    while(i<N and j<N){
	        if(pw[i]<=rw[j]){
	            c++;
	            i++;j++;
	        }
	        else{
	            j++;
	            
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
