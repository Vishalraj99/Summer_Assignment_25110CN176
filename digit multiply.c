#include<stdio.h>
int main()
{
    int n,d,t=1;
    printf("enter the number");
    scanf("%d",&n);
    while (n>0)
    { 
        d=n%10;
     t=t*d;
     n=n/10;
    }
    
    printf("product of given no.=%d",t);
    return 0;
}