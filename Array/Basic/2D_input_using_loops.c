#include<stdio.h>                         //2D array using loops
int main(){
    int data[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the data:");
            scanf("%d",&data[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
}