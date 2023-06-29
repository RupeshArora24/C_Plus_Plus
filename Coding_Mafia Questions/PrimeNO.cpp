#include<iostream>
using namespace std;


bool isPrime(int n){
    if (n<2) return false;
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }return true;
}
int main(){
   int count =0; 
   int N=100;
   for(int j=0;j<N;j++){
     if(isPrime(j)){
      cout<<j<<endl;
      count = count +1;
     }
     
   }cout<<"Total number of prime number between 1 to n is = "<<count;

   return 0;
   
}