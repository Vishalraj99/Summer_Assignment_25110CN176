#include<iostream>
using namespace std;
int sum(int, int);//function declaration
int main(){
    int a,b;
    cout<<"enter the two numbers:"<<endl;
    cin>> a>>b;
    cout<< "the sum of two number is="<<sum(a,b)<<endl;//function call
    return 0;

}int sum(int x ,int y){
//function defination
    int z;
    z=x+y;
    return z;
}