#include<stdio.h>                   //memory allocation using calloc of an array
#include<stdlib.h>
int main(){
    int n,i;
    int *arr;
    printf("Enter the number:");
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));           //in calloc there is comma
    if(arr==NULL){
        printf("Memmory allocation failed!");
    }
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered numbers are:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    free(arr);
    return 0;
}