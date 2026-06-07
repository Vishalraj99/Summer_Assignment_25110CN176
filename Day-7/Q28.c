#include<stdio.h>
int d=0;// global
int rev(int);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("reverse is %d",rev(n));
    return 0;
}
int rev(int n){ 
    if(n==0)
    return d;
    else { 
        d=d*10+n%10;
        return(rev(n/10));
    }
}