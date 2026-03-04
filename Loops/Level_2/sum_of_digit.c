#include<stdio.h>                           //sum of the digits of a number
int main(){
    int num,d,sum=0;
    printf("Enter the value of num;");
    scanf("%d",&num);
    for(;num>0;num=num/10){
        d=num%10;
    sum=sum+d;
    }
    printf("The sum of the digit is:%d",sum);
    return 0;
}