/*Problem
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three angles A, B and C, of the triangle separated by space.

Output Format
For each test case, display 'YES' if the triangle is valid, and 'NO', if it is not, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B,C ≤ 180
Sample 1:
Input
Output
3 
40 40 100
45 45 90
180 1 1
YES
YES
NO*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a+b+c)==180){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
