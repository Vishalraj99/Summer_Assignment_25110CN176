#include <iostream>
using namespace std;
int main() {
    int n,arr[100];
    cout<< "Enter number of elements: ";
    cin>> n;
    cout<< "Enter elements: ";
    for(int i =0;i<n;i++) {
        cin>> arr[i];
    }
    int maxe= arr[0];
    int maxf= 1;
    for (int i=0;i<n;i++) {
        int count=0;
        for(int j=0;j<n;j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if (count>maxf) {
            maxf=count;
            maxe=arr[i];
        }}
    cout<< "Element with maximum frequency: " << maxe<< endl;
    cout<<"Frequency: "<<maxf<<endl;
    return 0;
}