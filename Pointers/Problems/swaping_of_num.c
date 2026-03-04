#include<stdio.h>               //swaping of numbers using pointers and function
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    printf("Enter X:");
    scanf("%d",&x);
    printf("\nEnter Y:");
    scanf("%d",&y);
    swap(&x,&y);
    printf("X:%d",x);
    printf("\nY:%d",y);
    return 0;
}