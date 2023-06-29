#include <iostream>
using namespace std;

//binary search algo 

int main(){

    int arr[]={2,88,-9,5,4};
    int first,last,mid,index;
    
    index =-1;
    int x,n;

    n=sizeof(arr)/sizeof(arr[0]);
    first = arr[0];
    last=arr[n-1];
    mid=(first+last)/2;
    cin>>x;
    for(int i=0;i<n;i++){
       
       if(arr[i]==x){
        cout<<"element found";
        index =1;
       }
       // if given element is greater than middle element we will devide the array  into half and search in rght part
       else if(mid<x){
        first=mid+1;
       }
       // if given element is smaller than middle element we will devide the array  into half and search in left part
       else{
        last=mid-1;
       }

    }
    //index id updated to one means element found
    if(index==-1){
        cout<<"element not found";
    }
}