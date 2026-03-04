#include<stdio.h>                         //max of two numbers using pointer and function
int max(int *a,int *b){
    if(*a>*b){
        return *a;
    }
    else{
        return *b;
    }
}
int main(){
    int x,y,maximum;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter Y:");
    scanf("%d",&y);
     maximum=max(&x,&y);
     printf("Max is:%d",maximum);
     return 0;
}