#include<stdio.h>
int sum(int);
int main(){
    int n,i;
    printf("enter the number:");
    scanf("%d",&n);
    printf("sum is %d",sum(n));
    return 0;

}
int sum(int n){
    if(n==0)
    return 0;
    else{
        return(n%10+sum(n/10));
    }
}