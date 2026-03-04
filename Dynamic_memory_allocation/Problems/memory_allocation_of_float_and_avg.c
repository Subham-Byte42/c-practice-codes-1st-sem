#include<stdio.h>               //memory allocation of float and finding their average
#include<stdlib.h>
int main(){
    int n,i;
    float *arr,sum=0,avg;
    printf("Enter how many input you want:");
    scanf("%d",&n);
    arr=(float *)malloc(n*sizeof(float));
    for(i=0;i<n;i++){
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("The average of all the elements of this array:%f",avg);
    free(arr);
    return 0;
}
