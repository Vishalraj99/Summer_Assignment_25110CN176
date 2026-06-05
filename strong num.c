#include<stdio.h>
int main(){
    int n,i,sum=0,d,temp,f;// strong number is number whose digit factorial is itself
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        d=temp%10;//to get last digit
        f=1;//reset 
        for(i=1;i<=d;i++){
            f=f*i;}
            sum=sum+f;
         temp=temp/10;//repeat loop
    }
    if(sum==n){
        printf("%d is a strong number",sum);
    }else{
        printf("%d is not a strong number",sum);
    }
    return 0;
}