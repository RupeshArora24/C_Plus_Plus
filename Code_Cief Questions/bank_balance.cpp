#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int X;
    float Y,Z;
    cin>>X>>Y;
    if((X%5==0) and (X<Y)){
        Z = (Y-(X+0.50));
        cout<<fixed<<setprecision(2)<<Z;
    }
    else if(X>=Y){
        cout<<fixed<<setprecision(2)<<Y;
    }
    else{
        cout<<fixed<<setprecision(2)<<Y;
    }return 0;
}