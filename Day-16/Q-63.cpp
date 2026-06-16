#include <iostream>
using namespace std;
int main() {
    int n, sum,arr[100];
    cout<<"Enter number of elements: ";
    cin >> n;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout << "Enter required sum: ";
    cin >> sum;
    bool found = false;
    cout<<"Pairs are:"<<endl;
    for (int i= 0;i<n- 1; i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<sum<<endl;
                found=true;
            }
        }}
    if(found==false) {
        cout << "No pair found" << endl;
    }
    return 0;
}