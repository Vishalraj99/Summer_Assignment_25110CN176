#include<stdio.h>
int main(){
    int n,i,sum=0,d=1;
    printf("enter the number:");
    scanf("%d",&n);
    if(n==0){
        printf("binary=0");
    }else{
        while(n>0){
            i=n%2;// to get remainder 0 or 1
            sum=sum+i*d;
            d=d*10;
            n=n/2;
        }
    
    printf("binary=%d",sum);
    return 0;
    }
}