#include<stdio.h>                             //wheather a number is palindrome or not
int main(){
    int num,rev=0,pal,d;
    printf("Enter the number:");
    scanf("%d",&num);
    pal=num;
    for(;num!=0;num=num/10){
        d=num%10;
        rev=rev*10+d;
    }
    if(rev==pal){
        printf("The number is a palindrome.");
    }
    else{
        printf("The number is not a palindrome.");
    }
    return 0;
}