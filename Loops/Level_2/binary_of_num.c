#include<stdio.h>                                        //find the binary of a given number using loop
int main()
{
    int n,rem,place=1,binary=0,num;
    printf("Enter the number:");
    scanf("%d",&n);
    num=n;
     for(;n>0;){
        rem=n%2;
        binary=binary+rem*place;
        place=place*10;
        n=n/2;
     }
     printf("The binary of the number %d is %d",num,binary);
     return 0;
}