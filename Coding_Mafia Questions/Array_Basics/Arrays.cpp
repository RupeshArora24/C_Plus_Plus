#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }

    for(int i=0;i<4;i++){
        cout<<(arr[i]+100)<<endl;
    }

    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
}