#include <iostream>
using namespace std;
int main() {
    int a[100], n, temp;
    cout<< "Enter number of elements: ";
    cin>> n;
    cout<<"Enter array elements: ";
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    temp = a[0];
    for (int i=0;i<n-1;i++) {
        a[i]=a[i+1];
    }
    a[n- 1]=temp;
    cout<< "Array after left rotation: ";
    for(int i=0;i<n;i++) {
        cout<<a[i]<< " ";
    }
    return 0;
}