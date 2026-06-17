#include <iostream>
using namespace std;
int main(){
    int a[5]={4,6,8,9,2};
    int b[5]={3,5,6,7,4};
    cout<<"Intersection array: ";
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
    return 0;
}