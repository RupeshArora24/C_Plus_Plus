#include <stdio.h>
using namespace std;
int main(){
    int i=0; int j=0;
    if(i++ == j++){
        printf("%d %d",i--,j--); // as pre increment operators are assigned to %d first and then incremented
    }
    else{
        printf("%d %d",i,j);
    }
}