#include<iostream>
using namespace std;
int palin(int);//function declaration
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    palin(n);//funtion call
    return 0;
}
int palin(int x)
//funtion definition
    {int sum=0,d,p;
    p=x;
    while(x>0){
        d=x%10; //to get last digit
        sum=sum*10+d;
        x=x/10;//to eliminate last digit
    }
    if(sum==p){
    cout<<sum <<" is a palindrome number";
    return 0;}
    else{
        cout<< sum <<"is not a palindrome number";
        return 0;
    }
}