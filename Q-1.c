#include<stdio.h>
int main()
{
    int a,prime=0,n,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
if(n%i==0){
prime=1;
    break;}}
if(prime==0)
{ 
    printf("%d is a prime number",n);
}
else{
     printf("%d is not the prime number",n);
    }
return 0;}






