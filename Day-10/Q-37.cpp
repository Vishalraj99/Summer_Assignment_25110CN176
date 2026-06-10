#include<iostream>
using namespace std;
int main(){
    int i,j,n,space;
    cout<< "enter no. of rows:"; 
    cin>> n;
    for(i=1;i<=n;i++){
        for(space=1;space<=n-i;space++){
            cout<< " ";
        }for(j=1;j<=2*i-1;j++){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}