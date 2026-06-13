#include <iostream>
using namespace std;
int main(){ 
//Max size of array
    int a[100],n,i;
    cout<<"Enter the no. of array elements: ";
    cin>>n;
    cout<<"Enter array elements:"<<endl;
    for(i=0;i<=n-1;i++) 
    {cin>>a[i];
    }
    cout<<"The array elements are:"<<endl;
    for (i=0;i<= n-1;i++) 
    {cout<<a[i] <<endl;
    }
    return 0;}
