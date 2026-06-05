#include<stdio.h>
int main(){
    int n,i,sum=0; //perfect number is a +ve number whose divisor sum is equal to the given number//
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(n==sum && n>0)
    {
        printf("%d is a perfect number",n);
    }else{
        printf("%d is not a perfect number",n);
    }
     return 0;

    }
