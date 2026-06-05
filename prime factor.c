#include<stdio.h>
int main(){
    int n,i,j,prime,p=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            prime=1;
            for(j=2;j<i;j++){
                if(i%j==0){
                prime=0;
                break;}

            }
            if(prime==1)
                p=i;
        }
        
    }
    printf("%d is the greatest prime factor",p);
    return 0;
    

}