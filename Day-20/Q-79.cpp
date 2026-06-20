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
        }
    }
    cout<<"Row wise sum is:\n";
    for(i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
        cout<<"Sum of row "<<i+1<<" = "<<sum<<endl;}
    return 0;
}