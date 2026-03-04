#include<stdio.h>                          //fiboniccai series
int main(){
    int n,a=0,b=1,next,i;
    printf("Enter how many digits you want to print:");
    scanf("%d",&n);
    printf("The fabninocci series:%d ,%d ,",a,b);
    for(i=3;i<=n;i++){
        next=a+b;
        printf("%d ,",next);
        a=b;
        b=next;
    }
    return 0;
}