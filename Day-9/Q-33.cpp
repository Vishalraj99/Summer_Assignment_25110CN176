#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<< "enter no. of rows:";//for any rows 
    cin>> n;
    //for outer loop means rows
    for(i=n;i>=1;i--){
      for(j=1;j<=i;j++)
      //for stars printing
      {
        cout<<"*";
    }
    cout<<endl;}
   return 0;
    
}