#include <iostream>
using namespace std;
int main(){
    int i;
    int a[5]={1,2,3,4,5};
    int b[5]={11,56,88,55,98};
    int c[10];
    for( i=0;i<5;i++){
        c[i]=a[i];
    }
    for(i=0;i<5;i++){
        c[i+5]=b[i];
    }
    cout<<"Merged array: ";
    for(i=0;i<10;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}