#include<iostream>
using namespace std;
int main(){
    int a[50],i,n,x,temp=0;
    cout<< "enter the no. of elements:";
    cin>> n;
    for(i=0;i<n;i++){
        cin>> a[i];
    }
    cout<< " enter the element to be searched:";
    cin>> x;
    for(i=0;i<n;i++){
        if(a[i]==x){
            cout<< " the element is " << a[i];
            temp=1;
            break;
        }
    }
    if (temp !=1)
            cout<< " unsuccessful search ";
        
    return 0;
} 