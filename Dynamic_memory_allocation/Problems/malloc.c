#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int *arr;
    printf("Enter the value of n:");
    scanf("%d",&n);
     arr=(int *)malloc(n*sizeof(int));   //in malloc there is multiplication
     if(arr==NULL){
        printf("Memory allocation failed!");
     return 1;
    }
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered integers are:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    free(arr);
    return 0;
}