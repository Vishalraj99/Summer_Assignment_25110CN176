#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter two numbers");
    scanf("%d%d",&n,&m);
    for(i=1;(i<=n && i<=m);i++){
        if(n%i==0 && m%i==0)
        {
            j=i;
        }
    }
    printf("GCD=%d",j);
    return 0;

}