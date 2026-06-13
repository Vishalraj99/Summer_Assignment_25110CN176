#include <iostream>
using namespace std;
int main(){ 
    // initialized to 0
    int a[100],n,i,even=0,odd=0;
    cout<<"Enter no. of elements";
    cin >>n;
    for (i=0;i<=n-1;i++) 
    {cin>>a[i];
        // Checking if the number is even or odd
        if(a[i]%2== 0) 
        {   even++;
        } 
        else 
        {  odd++;
        }}
    cout<< "No. of even array elements are=" << even << endl;
    cout<<"No. of odd array elements are= "<< odd << endl;
    return 0;
}