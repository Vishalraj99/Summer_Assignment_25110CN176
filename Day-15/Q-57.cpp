#include<iostream>
using namespace std;
int main(){
    int a[100],n,d,i;
    cout<<"enter no. of element:";
    cin>> n;
    for(i=0;i<n;i++){
    cin>> a[i];
    }
    for(i=0;i<n;i++){
    int sum=0;
     int temp=a[i];
    while(temp>0){
        d=temp%10;
        sum=sum*10+d;
        temp=temp/10;
    }
    cout<<" the reverse of " <<a[i] <<" the no. is "<< sum;}
    return 0;
}