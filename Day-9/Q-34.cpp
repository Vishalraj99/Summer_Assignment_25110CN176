#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<< "enter no. of rows:";//for any rows 
    cin>> n;
    //for outer loop means rows
    for(i=n;i>=1;i--){
      for(j=1;j<=i;j++)
      //for integers printing
      {
        cout<<j;
    }
    cout<<endl;}
   return 0;
    
}