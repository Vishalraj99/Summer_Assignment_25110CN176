#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<< "enter no. of rows:";//for any rows 
    cin>> n;
    //for outer loop means rows
    for(i=1;i<=n;i++){
      for(j=1;j<=i;j++)
      {
        cout<<char(i+64);//explicit typecasting
    }
    cout<<endl;}
   return 0;
    
}