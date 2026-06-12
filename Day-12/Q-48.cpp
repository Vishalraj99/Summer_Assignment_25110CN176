#include<iostream>
using namespace std;
int per(int);
int main(){
    int n;
    cout<<"enter the number";
    cin>> n;
    per(n);
    return 0;
}
int per(int x){
    int i,p,sum=0;
    p=x;
    for(i=1;i<=x/2;i++){
    if(x%i==0 )
    sum=sum+i;
    }if(sum==p){
        cout<< p << " is a perfect number";
    }else{
        cout<< p <<" is not a perfect number";
    }return 0;
}