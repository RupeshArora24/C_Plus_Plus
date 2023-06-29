#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int counter = 1;
    int N;
    cin >> N;
    while(counter<=N){
        sum = sum +counter;
        counter++;
    }
    cout<<"The sum fro [1 to N ] is = "<<sum<<endl;
    cout<<"The sum of n numbers by formula = "<<((N*(N+1))/2)<<endl;
}