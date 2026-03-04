#include<stdio.h>
int main(){                                              //find the largest number in a array
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
     
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter number %d:",i);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The largest array is:%d",max);
    return 0;
}