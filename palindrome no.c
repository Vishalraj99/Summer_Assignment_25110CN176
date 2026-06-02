#include<stdio.h>
int main()
{int n,d,sum=0,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {d=n%10;
        sum=sum*10+d;
        n=n/10;
    }
if(sum==temp)
{
printf("%d is a palindrome number",sum);
}
else{
 printf("%d is not a palindrome number",sum);}
return 0;
}