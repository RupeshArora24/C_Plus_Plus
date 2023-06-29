#include<iostream>
using namespace std;
# define Rupesh 10000000

int a = 15;
int b = 10;

int main() 
{
    /* I am RUPESH ARORA 3RD year Data Science Student from shri ramdeobaba College of Engineering and management */

    cout<<"I am RUPESH ARORA 3RD year Data Science Student from shri ramdeobaba College of Engineering and management"<<endl;
    cout<<"Hello world !"<<endl;

    cout<<"Division of two intigers - will be an intiger = "<< (a/b) << endl;
    cout<<"Pre Increment opretot = "<<++a<<endl;
    cout<<"Post Increment Operator = "<<a++ << endl;
    cout<<"a = "<<a << endl;
    int d = ++a;
    cout<<"After Pre Increment d = "<<d<<"  a = "<<a<<endl;
    int e = a++;
    cout<<"After Post Increment e = "<<e<<"  a = "<<a<<endl;
    cout<<"MACROS - "<<Rupesh <<endl;
   

    /*I encountered with a error when i have the semicolon here"# define Rupesh 10000000"; when i try to run the code this "cout<<"MACROS - "<<Rupesh <<endl;"
    but if i remove the semicolon it desent gives the error
    
    and if i try to run this code "cout<<"MACROS - "<<Rupesh" with the semicolon then it doesent give any error */

     cout<<"using sizeof a " <<sizeof(a)<<endl;
}