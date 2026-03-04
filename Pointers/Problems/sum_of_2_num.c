#include<stdio.h>                               //sum  of two numbers 
int sum(int *a,int *b){
    return (*a+*b);
}
int main(){
    int a,b,result;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    result=sum(&a,&b);
    printf("Sum:%d",result);
    return 0;
}