#include<iostream>
using namespace std;


//Linear search

int main(){
    int arr[]={1,-2,2,5,6,8};
    int index =-1;
    int x;//element to be found
    cin>>x;
    int n;
    n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        if(arr[i]==x)
        {
            cout<<"element found";
            index =1;
        }
    }
    if(index==-1){
        cout<<"element not found";
    }
}