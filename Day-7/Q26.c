#include<stdio.h>
int fibo(int);
int main(){
    int i,n;
    printf("enter how many terms to print:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        printf("%d\t",fibo(i));

    }
    return 0;
}
int fibo(int i){
    if(i==0)
    return 0;
    else if(i==1)
    return 1;
    else{return(fibo(i-1)+fibo(i-2));}
}