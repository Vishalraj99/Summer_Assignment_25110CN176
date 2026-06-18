#include<iostream>
using namespace std;
int main(){
    int i,j,a[50],n,temp;
    cout<< " enter no. of element";
    cin>> n;
    cout<< " enter list of element to be sorted ";
    for(i=0;i<n;i++){
        cin>> a[i];
    }
    for(i=0;i<n-1;i++){  // no. of passes
    for(j=0;j<n-1-i;j++){
    if(a[j]>a[j+1]){
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;}
    }
  }
  cout<<" the sorted array: ";
  for(i=0;i<n;i++){
    cout<< a[i];
  }
  return 0;
}