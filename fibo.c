#include<stdio.h>
int main()
{
     int a=0,b=1,i,n,fib;
     printf("enter number of terms:");
     scanf("%d",&n);
     printf("%d\t%d\t",a,b);
     for(i=0;i<n-2;i++){  //1st and 2nd terms are already ptinted //
     fib=a+b;
     printf("%d\t",fib);
     a=b;
     b=fib;}
     return 0;

}