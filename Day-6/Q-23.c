#include<stdio.h>
int main(){
    int n,d=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n>0){
       if( n%2==1){
        d++;}
        n=n/2;//for next bit
       
    }printf("bits=%d",d);
    return 0;
}