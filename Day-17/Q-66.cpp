#include <iostream>
using namespace std;
int main(){
    int i,count,j;
    int a[5]={8,9,6,4,5};
    int b[5]={3,5,7,9,2};
    cout<<"Union array: ";
    for(i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    for(i=0;i<5;i++){
        count=0;
        for(j=0;j<5;j++){
            if(b[i]==a[j]){
                count++;
            }
        }
        if(count==0){
            cout<<b[i]<<" ";
        }
    }
    return 0;
}