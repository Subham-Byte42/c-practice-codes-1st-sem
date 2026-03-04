#include<stdio.h>                   //sum of n numbers using memory allocation
#include<stdlib.h>
int main(){
    int sum=0,i,n;
    int *ptr;
    printf("Enter the value of n:");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum is:%d",sum);
    free(ptr);
    return 0;

}