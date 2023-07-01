
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    
    vector <int> vect;
    int s;
    cout<<"size of vector"<<endl;
    cin>>s;
    // taking input from the user
    int num;
    for(int i=0;i<s;i++){
        cout<<"enter the element = "<<endl;
        cin>>num;
        vect.push_back(num);
    }

    for(int k=0;k<s;k++){
        cout<<" "<<vect.at(k)<<endl;
    }



    /* SORTING */

    sort(vect.begin(),vect.end());

      for(int l=0;l<s;l++){
        cout<<" "<<vect.at(l)<<endl;
    }

}