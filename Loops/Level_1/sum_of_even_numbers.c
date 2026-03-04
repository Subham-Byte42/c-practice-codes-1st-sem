#include<stdio.h>                //printfing the sum of the even numbers using loops
int main()
{
    int n,i,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
        sum=sum+i;
    }
    printf("The sum  of even number is:%d",sum);
    return 0;
}