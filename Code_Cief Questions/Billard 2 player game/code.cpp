#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N,s1,s2;
	int max,diff;
	int leader,lead;
	leader=lead=diff=0;
	
	max=0;
	cin>>N;
	while(N--){
	  
	  cin>>s1>>s2;
	  diff=abs(s1-s2);
	  
	  if(diff>max){
	      if(s1>s2){
	          lead=(s1-s2);
	          leader=1;
	          max=lead;
	      }
	      else{
	          lead=(s2-s1);
	          leader=2;
	          max=lead;
	      }
	  }
	    
	}cout<<leader<<" ";
	cout<<lead;
	return 0;
}
