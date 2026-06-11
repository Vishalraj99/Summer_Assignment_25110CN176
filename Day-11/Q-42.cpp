#include<iostream>
using namespace std;
int max(int,int);
int main(){
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<< "the maximum no.is="<<max(a,b);
    return 0;

}int max(int x, int y){
if(x>y){
    return x;
}else { return y;}
}