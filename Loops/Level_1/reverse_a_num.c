#include<stdio.h>                    //reverse a number using loop
int main(){
    int num,rev=0,d;
    printf("Enter the number:");
    scanf("%d",&num);
    for(;num!=0;num=num/10){
        d=num%10;
        rev=rev*10+d;
    }
    printf("The reverse of this number is:%d",rev);
    return 0;
}