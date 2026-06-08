#include<iostream>
using namespace std;
int main(){
    int i,n,j;
    cout<<"enter the rows";
    cin>>n;
    //outer loop for rows
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)//for char
        {
            cout<<char(j+64);//explicit type casting
        }
       cout<<endl;
    }
  return 0;
}