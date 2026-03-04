#include<stdio.h>                       //count the number of even or odd digit in a number
int main(){
    int num,d,count1=0,count2=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(;num>0;num=num/10){
        d=num%10;
        if(d%2==0){
            count1++;
        }
        else{
            count2++;
        }
    }
    printf("The number of even digit in this number is:%d\n",count1);
    printf("The number of odd digit in the number is :%d",count2);
    return 0;
}