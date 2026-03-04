#include<stdio.h>                   //factorial of a num
int facto(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num;
    printf("Enter num:");
    scanf("%d",&num);
    int fact=facto(num);
    printf("The factorial of the number:%d",fact);
    return 0;
}