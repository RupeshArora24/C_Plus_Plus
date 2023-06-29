#include<iostream>
using namespace std;

int main(){
    // Maximum sum subarray problem
    //ecluding a case of array containing all -ve numbers.In that case the max sum will be min negetive
    //intializing array 
    int arr[]={2,4,-8,9,10,-2,4,-20,10};
    int n;
    //intializing current_sum and max_sum to first element of array

    int curr_sum = arr[0];
    int max_sum = arr[0];
    // no. of elements of array
    n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i<n;i++){
          
        // if the curr_sum is negetive we make the currsum as 0
        if((curr_sum+arr[i])<0){
        curr_sum=0;
        }
        else{
            curr_sum=curr_sum+arr[i];
            // checking max summ should be greeater than current
            if(max_sum<curr_sum){
                max_sum=curr_sum;
            }
        }
    }cout<<"Maximum sum = "<<max_sum;
   

}