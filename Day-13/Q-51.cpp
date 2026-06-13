#include <iostream>
using namespace std;
int main(){
    int a[100],n,i,min,max;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    // First loop: Input all elements into the array
    for (i = 0; i <= n - 1; i++) 
    {   cin >> a[i];
    }
    // Initialize min and max with the first element
    min = max = a[i];
    for (i=1;i<=n-1;i++) 
    {
        if(a[i]<min) 
        {
            min =a[i];
        }
        if(a[i]>max) 
        {max=a[i];
        }
    cout<<"The minimum and maximum values are="<<min<<","<<max<<endl;
    return 0;
}