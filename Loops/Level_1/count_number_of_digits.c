#include<stdio.h>                    //count the number of digits
int main(){
    int num,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0){
        num=-num;
    }
    else if(num==0){
        count=1;
    }
    else{
        // for(;num!=0;num=num/10){
        //     count++;
        // }
        // printf("Number of digit:%d",count);
        while(num!=0){
            num=num/10;
            count++;
        }
        printf("The number of digit:%d",count);
    }
    return 0;
    
}