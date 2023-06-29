#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    
    int X;
    //total money to spend

    int Y;
    //money spent per day

    cin>>X;
    cout<<" ";
    cin>>Y;
    
    if(X/Y<30){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    }
    return 0;
}