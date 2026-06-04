#include<stdio.h>
int main()//for 3 digit only 
{int n,d,m,i,sum,temp;
    printf("enter the first number");
    scanf("%d",&n);
    printf("enter the last number");
    scanf("%d",&m);
    for(i=n;i<=m;i++){  
        sum=0;
        temp=i;//copy the number i to temp
        while(temp>0){
        d=temp%10; // to get last digit
        sum=sum+d*d*d;//for 3 digit only (for 4 digit you have to multiply 4times d)
        temp=temp/10;}//to remove last digit
     if (sum==i){
     printf("armstrong numbers are %d\n",i);}
     }

 return 0;
}