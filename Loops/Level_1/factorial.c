#include<stdio.h>
int main()                  //factorial of a given number
{
    int n,i,fact=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("\nThe factorial of the number is given by:%d",fact);
return 0;
}