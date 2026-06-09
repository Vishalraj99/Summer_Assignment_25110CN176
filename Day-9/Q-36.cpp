#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter number of rows:";//for any size of hollow square
    cin>>n;
    for(i=1;i<=n;i++)//for rows
    {
        for(j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n)/*in first column i will always be 1 and
             in last column i will always be n*/
            {
            cout<<"*";
        }else 
        cout<<" ";}
        cout<<endl;
       
    }
    return 0;
}