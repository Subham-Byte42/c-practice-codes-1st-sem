#include<stdio.h>                                       //check strong number
int main(){
    int n,i,fact=1,sum=0,d,num;
    printf("Enter the number:");
    scanf("%d",&num);
    n=num;
    while(n != 0){
        d=n%10;
    for(i=1;i<=d;i++){
        fact=fact*i;
    }
    sum=sum+fact;
    n=n/10;
}
    if(sum==num){
        printf("The number %d is a strong number.",num);
    }
    else{
        printf("The number %d is not a strong number.",num);
    }
    return 0;
}