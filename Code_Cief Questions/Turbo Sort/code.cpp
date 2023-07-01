
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int t;
    int n;
    vector <int> vect;
    cin>>t;
    for(int i=0;i<t;i++){
        
        cin>>n;
        vect.push_back(n);
    }
    sort(vect.begin(),vect.end());
    
     for(int j=0;j<t;j++){
        
        cout<<vect[j]<<endl;
        
    }
    
}
