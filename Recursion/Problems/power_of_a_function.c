#include<stdio.h>                   //power of a function using recursion
int power(int x,int n){
    if(n==0){
        return 1;
    }
    else{
        return x*pow(x,n-1);
    }
}
int main(){
    int x,n;
    printf("Give the base x:");
    scanf("%d",&x);
    printf("Give the power n:");
    scanf("%d",&n);
    int pow;
    pow=power(x,n);
    printf("The answer is:%d",pow);
    return 0;
}