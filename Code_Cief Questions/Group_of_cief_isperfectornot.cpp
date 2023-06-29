#include<iostream>
using namespace std;

int main(){
    int T;
    int age;
    cin>>T;
    while(T--){
        int A,B,C;
        cin>>A;
        cout<<" ";
        cin>>B;
        cout<<" ";
        cin>>C;
        
        if(A==(B+C)){
            cout<<"YES";
            }
        else if(B==(A+C)) {
            cout<<"YES";
            }
        else if(C==(A+B)) {
            cout<<"YES";
            }
        else {
            cout<<"NO";
            }
    }return 0;
}