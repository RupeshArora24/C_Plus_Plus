/*Problem
Given an array A of length N, your task is to find the element which repeats in A maximum number of times as well as the corresponding count. In case of ties, choose the smaller element first.

Input
First line of input contains an integer T, denoting the number of test cases. Then follows description of T cases. Each case begins with a single integer N, the length of A. Then follow N space separated integers in next line. Assume that 1 <= T <= 100, 1 <= N <= 100 and for all i in [1..N] : 1 <= A[i] <= 10000

Output
For each test case, output two space separated integers V & C. V is the value which occurs maximum number of times and C is its count.

Sample 1:
Input
Output
2
5
1 2 3 2 5
6
1 2 2 1 1 2
2 2
1 3
Explanation:
In first case 2 occurs twice whereas all other elements occur o*/

#include <iostream>
#include<vector>
#include<cmath>  
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	vector <int> input;
	for(int i=1;i<=12;i++){
	    input.push_back(pow(2,i-1));
	    
	}
	
	int t;
	cin>>t;

	while(t--){
	    
	    int n,ans;
	    cin>>n;
	    ans=0;
	    
	   
	   
	    for(int i=11;i>=0;i--){
	       
	        while(n>=input[i]){
	               ans=ans+1;
	               n=n-input[i];
	              
	               }
	                 
	      
	       }cout<<ans<<endl;

	}

}	
