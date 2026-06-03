#include<stdio.h>
int main()
{
int n,i,m,prime,a,j;
printf("enter the first number");
scanf("%d",&n);
printf("enter the last number");
scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        if(i<2)
        
            continue;

            prime=1;
    
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1)
        printf("%d\n",i);

    }
        
return 0;


}