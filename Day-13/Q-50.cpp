#include <iostream>
using namespace std;
int main() 
{// s is initialized to 0 to hold the running total
    int a[100],n,i,s= 0;
    cout << "Enter the no. of elements in array: ";
    cin >> n;
    for (i=0;i<=n-1;i++) 
    {
        cin>>a[i];
        s=s+a[i]; 
    }
    cout<<"The sum of all array elements is ="<<s<<endl;
    return 0;
}