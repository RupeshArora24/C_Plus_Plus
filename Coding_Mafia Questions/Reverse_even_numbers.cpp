#include<iostream>
using namespace std;


int reverse_even_no(int N){
  
   if(N%2==0) {
    cout<<N<<endl;
    return reverse_even_no(--N);
    
   }
   else {
     if(N>0) return reverse_even_no(--N);
   }return 0;  
}

int main(){
    int N;
    cin>>N;
    reverse_even_no(N);
    return 0;
}