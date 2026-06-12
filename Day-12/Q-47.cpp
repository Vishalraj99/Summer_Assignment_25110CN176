#include<iostream>
using namespace std;
int fib(int);//function declaration
int main(){
    int n;
    cout<< "enter the number of terms:";
    cin>> n;
    fib(n);//function call
    return 0;
}
int fib(int x)//function defination
{
    int a=0,b=1,f,i;
    if(x>=1)
    cout<< a <<" ";
    if(x>=2)
    cout<< b <<" ";
        for(i=3;i<=x;i++){
            f=a+b;
            cout<< f << " ";
            a=b;
            b=f;
        }return 0;
    }
    

