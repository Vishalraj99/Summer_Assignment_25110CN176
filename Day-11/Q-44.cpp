#include<iostream>
using namespace std;
int fact(int);
int main(){
    int n;
    cout<< "enter the number:";
    cin>>n;
    cout<<"factorial of the given no. is="<<fact(n);
    return 0;

}
int fact(int x){
    int i,f=1;
        for(i=1;i<=x;i++){
            f=f*i;
            
        }
        return f;
    }
