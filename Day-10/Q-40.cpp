#include<iostream>
using namespace std;
int main(){
    int i,n,j,space;
    cout<<"enter no. of rows:";
    cin>> n;
    for(i=n;i>=1;i--){
        for(space=1;space<=n-i;space++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<< j;
        }for(j=i-1;j>=1;j--){
            cout<< j;
        }
        cout<< endl;
    }
    return 0;
}