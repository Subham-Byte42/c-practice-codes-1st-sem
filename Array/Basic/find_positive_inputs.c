//by taking inputs from the user find how many of those are positive and negative

#include<stdio.h>                                            
int main(){
    int num[10],pos=0,neg=0,i;
    for(i=0;i<10;i++){
        printf("Enter the number:");
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++){
        if(num[i]>0){
            pos=pos+1;
        }
        else{
            neg=neg+1;
        }
    }
    printf("The number of positive numbers:%d\n",pos);
    printf("The number of negative numbers:%d",neg);
    return 0;
}