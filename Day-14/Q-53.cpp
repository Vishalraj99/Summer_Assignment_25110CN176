#include<iostream>
using namespace std;
int main(){
    int i,n,x,temp=0,arr[50];
    cout<<"enter the no. of element";
    cin>> n;
    for(i=0;i<=n-1;i++){
    cin>> arr[i];}
    cout<< "enter the number to be searched";
    cin>> x;
    for(i=0;i<n;i++){
        if(arr[i]==x){
        temp=1;
        break;}
    }
    if(temp==1){
        cout<<"element found at "<< i+1 <<"th position";
    }else{"unsuccessful serach";
    }
    return 0;


}