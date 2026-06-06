#include<stdio.h>
int main(){
    int n,i,sum=0,d=1;
    printf("enter the number:");
    scanf("%d",&n);
    if(n==0){
        printf("decimal=0");
    }else{
        while(n>0){
            i=n%10;// to get 0 or 1
            sum=sum+i*d;
            d=d*2;
            n=n/10;//to get last digit
        }
    
    printf("decimal=%d",sum);
    return 0;
    }
}