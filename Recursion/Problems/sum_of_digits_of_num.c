#include<stdio.h>                   //sum of the digits of a number using recursion
int add(num){
    if(num==0){
        return;
    }
    else{
        return (num%10)+add(num/10);
    }
}
int main(){
    int num;
    printf("Enter num:");
    scanf("%d",&num);
    int sum;
    sum=add(num);
    printf("The sum of the digits:%d",sum);
    return 0;
}