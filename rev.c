#include<stdio.h>
int main()
{int n,d,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    
    while(n>0)
    {d=n%10;
        sum=sum*10+d;
        n=n/10;
    }

 printf("%d is the reverse of the given number",sum);
return 0;
}