#include<stdio.h>    //multiplication table
int main(){
    int num,i;
    printf("Enter the number which you want to see the multiplication table:");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}