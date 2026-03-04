#include<stdio.h>                   //wheather a num is even or odd
void check(int a){
    if(a%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    check(a);
    return 0;
}