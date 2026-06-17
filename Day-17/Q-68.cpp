#include <iostream>
using namespace std;
int main(){
    int a[5]={10,20,70,40,50};
    int b[5]={30,90,60,70,80};
    cout<<"Common elements: ";
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