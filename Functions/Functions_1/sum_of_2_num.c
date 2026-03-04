#include<stdio.h>                       //sum of two numbers 
int add(int a,int b){
    return a+b;
}
int main(){
    int a,b,result;
    scanf("%d %d",&a,&b);
    result=add(a,b);
    printf("Sum:%d",result);
    return 0;
}