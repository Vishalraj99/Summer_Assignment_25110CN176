#include <iostream>
using namespace std;
int main() {
    int a[100],n,j=0;
    cout<< "Enter number of elements: ";
    cin>> n;
    cout<< "Enter array elements: ";
    for(int i=0;i<n;i++) {
        cin>> a[i];
    }
    for(int i=0;i<n;i++) {
        if (a[i] != 0) {
            a[j]=a[i];
            j++;
        }}
    while (j<n){
        a[j]=0;
        j++;
    }
    cout<< "Array after moving zeroes to end: ";
    for (int i=0;i<n;i++) {
        cout<<a[i]<< " ";
    }
   return 0;
}