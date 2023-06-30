/*Problem
Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

Class ID	Ship Class
B or b	BattleShip
C or c	Cruiser
D or d	Destroyer
F or f	Frigate
Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains a character.

Output Format
For each test case, display the Ship Class depending on ID, in a new line.

Constraints
1 ≤ T ≤ 1000
Sample 1:
Input
Output
3 
B
c
D
BattleShip
Cruiser
Destroyer*/

#include <iostream>
using namespace std;
#include<string>
int main() {
	// your code goes here
	int t;
	char s;
	cin>>t;
	while(t--){
	    cin>>s;
	    if(s=='B' or s=='b'){
	        cout<<"BattleShip"<<endl;
	    }
	    else if(s=='C' or s=='c'){
	        cout<<"Cruiser"<<endl;
	    }
	    else if(s=='D' or s=='d'){
	        cout<<"Destroyer"<<endl;
	    }
	    else {
	        cout<<"	Frigate"<<endl;
	    }
	}
	return 0;
}
