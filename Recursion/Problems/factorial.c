#include<stdio.h>                //factorial of a number using recursion
int factorial(int n){
    if(n==1){
        return;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int fact;
    fact=factorial(n);
    printf("The factorial  of the number is given by:%d",fact);
    return 0;
}