#include<iostream>
using namespace std;
int main(){
    int i,j,a[10][10],c[10][10],n,m;
    cout<< " enter the dimention of matrix: ";
    cin>> n>>m;
    cout<< " enter the matrix ";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>> a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[j][i]=a[i][j];
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