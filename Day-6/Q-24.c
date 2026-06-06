#include <stdio.h>
int main()
{
    int m,n,i,d=1;
    printf("Enter number and power:");
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
     d =d*m;
    }
    printf("Ans=%d",d);
    return 0;
}