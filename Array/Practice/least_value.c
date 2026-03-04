#include<stdio.h>                    //finding the least value in an array
int main(){
    int n,i;
    printf("Enter how many array you want:");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the array %d:",i);
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The least value of the array is:%d",min);
    return 0;
}