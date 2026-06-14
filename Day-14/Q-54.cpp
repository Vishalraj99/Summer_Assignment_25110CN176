#include<iostream>
using namespace std;
int main(){
    int i,n,num=0,a[5],element;
    cout<<"enter the no. of element ";
    cin>> n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<< " enter element to find frequency";
    cin>> element;
    for(i=0;i<n;i++){
        if(a[i]==element)
        num++;
    }
    cout<<" frequency of " << element << " is " << num;
    return 0;
}