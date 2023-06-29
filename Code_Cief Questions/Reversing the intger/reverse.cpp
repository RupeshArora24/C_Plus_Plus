# include <iostream>
using namespace std;

int main(){

    int t,l;
    l =0;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int check;
     check = 0;
     
     while(n>0){
       l = n%10;
       n=n/10;
       
       if((l==0) and (check==0)){
          check =0;
       }
       else{
        check=1;
       }
       if(check!=0){
        cout<<l;
       }
       
     }cout<<endl;


    }

}