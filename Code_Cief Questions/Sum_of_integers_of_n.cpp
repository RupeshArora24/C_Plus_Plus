#include<iostream>
using namespace std;


int main(){

    //Taking input
    int T,n;
    //The number of test cases
    cin>>T;
    //Enter each test case
    for(int i=0;i<T;i++){
        cin>>n;
        int sum =0;
        while(n>0){
            sum = sum + (n%10);
            n = n/10 ;
        }
      cout<<sum<<endl;
    }return 0;
}