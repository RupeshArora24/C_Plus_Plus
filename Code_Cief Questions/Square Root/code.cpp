#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int t,n,sqr;
    cin>>t;
    if(t>20) return 1;
    while(t--){
        cin>>n;
        sqr=sqrt(n);
        cout<<round(sqr);
    }
}