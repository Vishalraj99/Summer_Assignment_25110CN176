#include<iostream>
using namespace std;
int main(){
    int a[100], n;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter elements:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }}}
    cout<<"Second largest element is "<<a[n-2];
    return 0;
}