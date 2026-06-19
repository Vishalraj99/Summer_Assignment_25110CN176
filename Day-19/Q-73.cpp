#include<iostream>
using namespace std;
int main(){
    int i,j,a[10][10],b[10][10],c[10][10],n,m;
    cout<< " enter the dimention of first matrix: ";
    cin>> n;
    cout<< " enter dimentions of second matrix: ";
    cin>> m;
    cout<< " enter first matrix ";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>> a[i][j];
        }
    }
    cout<< " enter second matrix ";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<< " the resultant matrix is: "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout <<c[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;

}