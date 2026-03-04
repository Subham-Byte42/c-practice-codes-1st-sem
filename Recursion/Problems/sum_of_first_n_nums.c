#include<stdio.h>                   //sum of the first n numbers using recursion
int sum(int n){
    if(n==0){
        return;
    }
    else{
        return n+sum(n-1);
    }
}
int main(){
    int n,add;
    printf("Enter n:");
    scanf("%d",&n);
    add=sum(n);
    printf("The sum is:%d",add);
    return 0;
}