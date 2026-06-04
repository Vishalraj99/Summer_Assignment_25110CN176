#include<stdio.h>
int main()
{int n,d,sum=0,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        d=n%10;
        sum=sum+d*d*d;
        n=n/10;
      }
if(sum==temp)
{
printf("%d is a armstrong number",temp);
}
else{
 printf("%d is not a armstrong number",temp);}
return 0;
}