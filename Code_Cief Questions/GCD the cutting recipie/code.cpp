/*Problem
The chef has a recipe he wishes to use for his guests, but the recipe will make far more food than he can serve to the guests. The chef therefore would like to make a reduced version of the recipe which has the same ratios of ingredients, but makes less food. The chef, however, does not like fractions. The original recipe contains only whole numbers of ingredients, and the chef wants the reduced recipe to only contain whole numbers of ingredients as well. Help the chef determine how much of each ingredient to use in order to make as little food as possible.

Input
Input will begin with an integer T, the number of test cases. Each test case consists of a single line. The line begins with a positive integer N, the number of ingredients. N integers follow, each indicating the quantity of a particular ingredient that is used.

Output
For each test case, output exactly N space-separated integers on a line, giving the quantity of each ingredient that the chef should use in order to make as little food as possible.

Constraints
T ≤ 100
2 ≤ N ≤ 50
All ingredient quantities are between 1 and 1000, inclusive.

Sample 1:
Input
Output
3
2 4 4
3 2 3 4
4 3 15 9 6
1 1
2 3 4
1 5 3 2*/

#include <iostream>
using namespace std;
#include <algorithm>
int main() {
	// your code goes here
	int t,n,N;
	
	cin>>t;
	while(t--){
	    cin>>N;
	    int min;
	    int arr[N];
	    int ans1;
	    min =0;
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
	    min = arr[0];
	    
	    for(int j=0;j<N;j++){
	        min = __gcd(min,arr[j]);
	    }
	    for(int k=0;k<N;k++){
	        cout<<arr[k]/min<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
