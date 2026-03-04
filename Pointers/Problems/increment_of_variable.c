                              //  if the value of pointer is NULL i.e. it is not pointing to any memory location
#include<stdio.h>            //increment a variable using pointer
int main(){
    int num=11;
    int *ptr;
    ptr=&num;
    (*ptr)++;
    printf("Incremented value:%d",num);
    return 0;
}   