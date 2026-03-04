#include<stdio.h>               //check wheather a number is positive or negative
void check(int a){
    if(a>0){
        printf("POSITIVE");
    }
    else if(a<0){
        printf("NEGATIVE");
    }
    else{
        printf("ZERO");
    }
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    check(num);
    return 0;
}