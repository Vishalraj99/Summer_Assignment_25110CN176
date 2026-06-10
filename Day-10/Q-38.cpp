#include<iostream>
using namespace std;
int main(){
    int i,j,n,space;
    cout<< "enter no. of rows:"; 
    cin>> n; //enter size of row
    for(i=n;i>=1;i--)//for rows
    {
        for(space=1;space<=n-i;space++)// for space printing
        {
            cout<< " ";
        }for(j=1;j<=2*i-1;j++)//for star printing
        {
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}