#include<iostream>
using namespace std;
int main()
{
    int a[10][10],r,c,i,j,flag=1;
    cout<<"Enter rows and columns: ";
    cin>>r>>c;
    if(r!=c)
    {
        cout<<"Matrix is not symmetric";
        return 0;
    }
    cout<<"Enter matrix elements:\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        cout<<"Matrix is symmetric";
    else
        cout<<"Matrix is not symmetric";
    return 0;
}