#include<stdio.h>                       //test wheather a number is prime or not.
int main()
{
    int i,n,prime=1;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<=0){
        prime=0;
    }
    else{
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                prime=0;
            }
        }
    } 
    if(prime){
        printf("%d is a prime number.",n);
    }
    else{
        printf("%d is not a prime number.",n);
    }
    return 0;
    }