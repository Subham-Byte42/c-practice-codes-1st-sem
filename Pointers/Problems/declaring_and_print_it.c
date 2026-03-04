#include<stdio.h>               //Declare a pointer to an integer and print the value and address of a variable using it.
int main(){
    int n;
    scanf("%d",&n);
    int *ptr;
    ptr=&n;
    printf("%d\n",ptr);
    printf("%d",*ptr);
    return 0;
}