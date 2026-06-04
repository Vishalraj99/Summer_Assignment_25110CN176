#include<stdio.h>
int main(){
    int m,n,i,a=0,b=1,fib;
    printf("enter position to find (m):");
    scanf("%d",&m);
        if(m==1)
        printf("the term is %d",a);
        else if(m==2)
        printf("the term is %d",b);
        else if(m>2)
        for(i=0;i<m-2;i++){
            fib=a+b;
          a=b;
          b=fib;}
          printf("the term is %d\n",fib);
        
    
    return 0;

}