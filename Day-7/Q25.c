#include<stdio.h>
int fact(int);
int main(){
int n,result;
printf("enter the number");
scanf("%d",&n);
result=fact(n);
printf("the factorial of the given number is %d",result);
return 0;

}
int fact(int n){
    if(n==0 || n==1)
    return 1;
    else{
        return(n*fact(n-1));
    }
}