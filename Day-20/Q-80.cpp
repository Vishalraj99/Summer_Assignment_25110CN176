#include<iostream>
using namespace std;
int main(){
    int a[10][10],r,c,i,j,sum;
    cout<<"Enter rows and columns: ";
    cin>>r>>c;
    cout<<"Enter matrix elements:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }}
    cout<<"Column wise sum is: "<<endl;
    for(j=0;j<c;j++)
    {
        sum=0;
        for(i=0;i<r;i++)
        {
            sum=sum+a[i][j];}
        cout<<"Sum of column "<<j+1<<" = "<<sum<<endl;}
    return 0;
}