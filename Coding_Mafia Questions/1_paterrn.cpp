#include<iostream>
using namespace std;

int pattern_1(int n){
    /*
    1
    11
    111
    1111
    11111
    */

    for(int RowNo = 1;RowNo<=n;RowNo++){
        for(int j=1;j<=RowNo;j++){
            cout<<"1 ";
        }
        cout<<endl;
    }
    return 0;
}

int pattern_2(){
    /*
    1
    12
    123
    1234
    12345
    */

    for(int RowNo=1;RowNo<=5;RowNo++){
        for(int j=1;j<=RowNo;j++){
            cout<<j;
        }
        cout<<endl;
    }return 0;
}

int pattern_3(){
    /*
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
    */
    
    for(int RowNo3 = 1;RowNo3<=5;RowNo3++){ 
        for(int star =1;star<=RowNo3;star++){
            cout<<"* ";
            }cout<<endl;
     }
     for(int i=4;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }cout<<endl;
     }return 0;

    }



int main(){
    pattern_1(10);
    return 0;
}