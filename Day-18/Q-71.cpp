#include<iostream>
using namespace std;
int main(){
    int a[100],n,x,mid,low,high,i,flag=0;
    cout<< " enter no. of element";
    cin>> n;
    cout<< " enter array element: ";
    for(i=0;i<n;i++){
        cin>> a[i];
    }
    cout<< " enter no. to be searched: ";
    cin>> x;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high/2);
        if(a[mid]==x){
        flag=1;
        break;}
        else if(a[mid]>x)
        high=mid-1;
        else{low=mid+1;}
    }
    if(flag==1){
        cout<<" element present at "<<mid+1;
    }
        else{
            cout<< " unsuccessfull search ";
        }
        return 0;

    }
