#include<stdio.h>                       //memory allocation of an integer
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation failed");
        return 1;
    }
    printf("Enter the value:");
    scanf("%d",ptr);//while taking the input of pointer we does not need to write &
    printf("You have entered:%d",*ptr);
    free(ptr);
    return 0;
}