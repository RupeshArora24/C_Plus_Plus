#include <iostream>
using namespace std;

long long int n;
int fibo(long long int n){
    if(n<=1) return 1;
    return (fibo(n-1) + fibo(n-2))%((10^9)+7);
}

int main(){
    long long int n;
    cin>>n;
    for(long long int i=0;i<=n;i++){
        cout<<"f("<<i<<")"<<" = "<<fibo(i)<<endl;
    }

}