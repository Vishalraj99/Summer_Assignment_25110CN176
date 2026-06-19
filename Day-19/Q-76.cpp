#include<iostream>
using namespace std;
int main()
{
    int a[10][10],m,n,i,j,s1=0,s2=0;
    cout<<"Enter matrix dimensions: ";
    cin>>m>>n;
    if(m==n)
    {
        cout<<"Enter the matrix elements:\n";
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<m;i++)
        {
            s1=s1+a[i][i];
            s2=s2+a[i][m-1-i];
        }
        cout<<"Sum of main diagonal elements = "<<s1<<endl;
        cout<<"Sum of secondary diagonal elements = "<<s2;
    }
    else
    {
        cout<<"Cannot find diagonal sums because the matrix is not square.";
    }
    return 0;
}