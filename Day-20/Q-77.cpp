#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2;
    cout<< " enter the dimentions of the first matrix: ";
    cin>> r1>>c1;
    cout<< "enter the dimentions of the second matrix:";
    cin>> r2>>c2;
    cout<< " enter the first matrix:";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>> a[i][j];
        }
    }
    cout<< " enter the second matrix: ";
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>> b[i][j];
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            c[i][j]=0;
            for(k=0;k<r2;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    cout<< " the resultant matrix is=";
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
           cout<< c[i][j];
        }
        cout<<endl;
    }
    return 0;
}