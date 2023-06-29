#include <iostream>
using namespace std;

int main(){

    int t,x;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int first,last;
        last = (n%10);
        
        while(n>0){
            x = n%10;
            n=n/10;        
        }
        first =x;    
        int sum;
        sum = first+last;
        cout<<sum<<endl;
    }return 0;
}