#include<iostream>
using namespace std;
int arm(int);//function declaration
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    arm(n);//funtion call
    return 0;
}
int arm(int x)
//funtion definition
    {int sum=0,d,p;
    p=x;
    while(x>0){
        d=x%10; //to get last digit
        sum=sum+d*d*d;//for three digit only
        x=x/10;//to eliminate last digit
    }
    if(sum==p){
    cout<<p <<" is a armstrong number";
    return 0;}
    else{
        cout<< p <<" is not a armstrong number ";
        return 0;
    }
}