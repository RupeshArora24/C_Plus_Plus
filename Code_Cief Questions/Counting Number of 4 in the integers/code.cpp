#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
  int t;
  int n,k;
  int ans;
  string a;
  ans=0;
  cin>>t;
  
    while(t--){
    cin>>n;
    
    a = to_string(n);
    
    k=a.length();
    
    for(int i=0;i<k;i++){
        if(a[i]=='4'){
            ans=ans+1;
            
        }
        else{
            ans=ans+0;
        }
    }cout<<ans<<endl;
    ans=0;
  }
 
  
}
