#include<stdio.h>               //swaping of two numbers
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int  main(){
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("after swaping a:%d,b:%d",a,b);
    return 0;
}