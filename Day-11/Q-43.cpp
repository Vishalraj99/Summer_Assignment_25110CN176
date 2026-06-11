#include<iostream>
using namespace std;
int prime(int);
int main(){
    int i,n;
    cout<< "enter the number:";
    cin>>n;
    prime(n);
    return 0;
}
int prime(int a){
    int i;
        for(i=2;i<=a/2;i++){
            if(a%i==0){
                cout<<a<< "is not a prime number";
                return 0;
            }
        }
                cout<<a << " is a prime number";
            return 0;

        
    }
